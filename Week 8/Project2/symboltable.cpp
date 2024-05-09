// CMSC 330 Advanced Programming Languages
// Project 2 Skeleton
// UMGC CITE
// Spring 2023

// This file contains the body of the functions contained in The SymbolTable class. The insert function 
// inserts a new variable symbol and its value into the symbol table and the lookUp function returns
// that value of the supplied variable symbol name.

/* Jade Pearl modified this document on 10/11/2023 to add a new clean() function and edited the insert
and lookup functions to properly handle exceptions for uninitialized/reinitialized variables */

#include <string>
#include <vector>
#include <iostream>
using namespace std;

#include "symboltable.h"
#include "exception.h"

void SymbolTable::insert(string variable, double value) {
    for (const Symbol& symbol : elements) {
        if (symbol.variable == variable) {
            throw myex;
        }
    }

    elements.push_back(Symbol(variable, value));
}

double SymbolTable::lookUp(string variable) const {
    int count = 0;
    double result = -1;

    for (const Symbol& symbol : elements) {
        if (symbol.variable == variable) {
            if (count > 0) {
                throw ex;
            }
            result = symbol.value;
            count++;
        }
    }

    if (count == 0) {
        throw ex;
    }

    return result;
}

void SymbolTable::clean() {
    elements.clear();
}


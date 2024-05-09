// CMSC 330 Advanced Programming Languages
// Project 2 Skeleton
// UMGC CITE
// Spring 2023

/* Jade Pearl
Last modified this document on 10/9/2023 for Project 2 in CMSC 330 for Session 1 of the Fall semester.
Added the cases of multiply, divide, */

// This file contains the body of the functions contained in The SubExpression class, which includes
// the constructor that initializes the left and right subexpressions and the static function parse
// parses the subexpression. Addition and subtraction are the two operators that are implemented.

/* Jade Pearl modified this document. Last modified on 10/11/2023. Added new include statements to
include newly created header files for operations created. Added new constructors to take into account
variables mid1 and mid2. Edited the parse function to include more operationss in the switch statement
and parse the variables in each case. */

#include <iostream>
#include <sstream>
using namespace std;

#include "expression.h"
#include "subexpression.h"
#include "operand.h"
#include "plus.h"
#include "minus.h"
#include "multiply.h"
#include "divide.h"
#include "mod.h"
#include "power.h"
#include "min.h"
#include "max.h"
#include "average.h"
#include "negate.h"
#include "conditional.h"
#include "quaternary.h"

SubExpression::SubExpression(Expression* left, Expression* right) {
    this->left = left;
    this->right = right;
}

SubExpression::SubExpression(Expression* left, Expression* mid1, Expression* right) {
    this->left = left;
    this->right = right;
    this->mid1 = mid1;
}

SubExpression::SubExpression(Expression* left, Expression* mid1, Expression* mid2, Expression* right) {
    this->left = left;
    this->right = right;
    this->mid1 = mid1;
    this->mid2 = mid2;
}

Expression* SubExpression::parse(stringstream& in) {
    Expression* left;
    Expression* right;
    Expression* mid1;
    Expression* mid2;
    char operation, paren;
    
    left = Operand::parse(in);
    in >> operation;
    switch (operation) {
        case '+':
            right = Operand::parse(in);
            in >> paren;
            return new Plus(left, right);
        case '-':
            right = Operand::parse(in);
            in >> paren;
            return new Minus(left, right);
        case '*':
            right = Operand::parse(in);
            in >> paren;
            return new Multiply(left, right);
        case '/':
            right = Operand::parse(in);
            in >> paren;
            return new Divide(left, right);
        case '%':
            right = Operand::parse(in);
            in >> paren;
            return new Mod(left, right);
        case '^':
            right = Operand::parse(in);
            in >> paren;
            return new Power(left, right);
        case '<':
            right = Operand::parse(in);
            in >> paren;
            return new Min(left, right);
        case '>':
            right = Operand::parse(in);
            in >> paren;
            return new Max(left, right);
        case '&':
            right = Operand::parse(in);
            in >> paren;
            return new Average(left, right);
        case '~':
            right = Operand::parse(in);
            in >> paren;
            return new Negate(left, right);
        case '?':
            mid1 = Operand::parse(in);
            right = Operand::parse(in);
            in >> paren;
            return new Conditional(left, mid1, right);
        case '#':
            mid1 = Operand::parse(in);
            mid2 = Operand::parse(in);
            right = Operand::parse(in);
            in >> paren;
            return new Quaternary(left, mid1, mid2, right);
    }
    return 0;
}
        
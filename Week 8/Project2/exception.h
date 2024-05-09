/* Jade Pearl
10/10/2023
Project 2
CMSC 330 Fall Session 1

The exception.h file contains two classes that inherit from the exception class. The classes
are uninit (for uninitialized variables) and reinit (variables initialized more than once). They
create predefined objects (ex for uninit and myex for reinit). This class carries out exception handling
whenever their objects are thrown in the main .cpp files of the program. Uninit is thrown in an instance
where a variable is left uninitialized and the reinit is thrown in the instance where a variable is
initialized more than once. */

#include <exception>
#include <string>
using namespace std;

class uninit : public exception {
public:
    virtual const char* what() const throw() {
        return "Exception thrown: Uninitialized variable";
    }
} ex;

class reinit : public exception {
public:
    virtual const char* what() const throw() {
        return "Exception thrown: Variable initialized more than once";
    }
} myex;
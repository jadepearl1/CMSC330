/* Jade Pearl
10/9/2023
Project 2
CMSC 330 Fall Session 1

The mod.h file consists of the Mod class which is a subclass of SubExpression. It creates a Mod object by calling
the SubExpression constructor. Its evaluate function takes the modulus (or remainder) of two expressions, the left and right
expressions. */

#include <cmath>

class Mod: public SubExpression {
public:
    Mod(Expression* left, Expression* right): SubExpression(left, right) {
    }
    double evaluate()  {
       return fmod(left->evaluate(),right->evaluate());
    }
};
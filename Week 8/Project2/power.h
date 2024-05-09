/* Jade Pearl
10/9/2023
Project 2
CMSC 330 Fall Session 1

The power.h file consists of the Power class which is a subclass of SubExpression. It creates a Power object by calling
the SubExpression constructor. Its evaluate function returns the exponential of two expressions, the left and right
expressions where the left is being raised to the power of the right: left to the right power */

#include <cmath>

class Power: public SubExpression {
public:
    Power(Expression* left, Expression* right): SubExpression(left, right) {
    }
    double evaluate()  {
       return pow(left->evaluate(),right->evaluate());
    }
};
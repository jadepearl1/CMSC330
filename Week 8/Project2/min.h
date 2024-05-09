/* Jade Pearl
10/9/2023
Project 2
CMSC 330 Fall Session 1

The min.h file consists of the Min class which is a subclass of SubExpression. It creates a Min object by calling
the SubExpression constructor. Its evaluate function returns the minimum/smallest of two expressions, the left and right
expressions. */

#include <iostream>
#include <algorithm>

class Min: public SubExpression {
public:
    Min(Expression* left, Expression* right): SubExpression(left, right) {
    }
    double evaluate()  {
       return  min(left->evaluate(), right->evaluate());
    }
};
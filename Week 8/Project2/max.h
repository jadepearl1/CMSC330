/* Jade Pearl
10/9/2023
Project 2
CMSC 330 Fall Session 1

The max.h file consists of the Max class which is a subclass of SubExpression. It creates a Max object by calling
the SubExpression constructor. Its evaluate function returns the max/largest of two expressions, the left and right
expressions. */

#include <algorithm>

class Max: public SubExpression {
public:
    Max(Expression* left, Expression* right): SubExpression(left, right) {
    }
    double evaluate()  {
       return max(left->evaluate(), right->evaluate());
    }
};
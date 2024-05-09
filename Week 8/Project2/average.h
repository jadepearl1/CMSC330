/* Jade Pearl
10/9/2023
Project 2
CMSC 330 Fall Session 1

The average.h file consists of the Average class which is a subclass of SubExpression. It creates an Average object by calling
the SubExpression constructor. Its evaluate function returns the average of two expressions, the left and right
expressions. */

class Average: public SubExpression {
public:
    Average(Expression* left, Expression* right): SubExpression(left, right) {
    }
    double evaluate()  {
       return (left->evaluate() + right->evaluate()) / 2;
    }
};
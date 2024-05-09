/* Jade Pearl
10/9/2023
Project 2
CMSC 330 Fall Session 1

The divide.h file consists of the Divide class which is a subclass of SubExpression. It creates a divide object by calling
the SubExpression constructor. Its evaluate function takes the quotient of two expressions, the left and right
expressions. */

class Divide: public SubExpression {
public:
    Divide(Expression* left, Expression* right): SubExpression(left, right) {
    }
    double evaluate()  {
       return left->evaluate() / right->evaluate();
    }
};
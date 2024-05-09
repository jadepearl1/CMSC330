/* Jade Pearl
10/10/2023
Project 2
CMSC 330 Fall Session 1

The quaternary.h file consists of the Quaternary class which is a subclass of SubExpression. It creates a Quaternary object by calling
the SubExpression constructor. Its evaluate function first examines the left expression. if the left expression is less than 0, it then
shares the value of the first expression after the # operator. If left is 0, then the value of the expression is the value of the second
expression after the # operator. If left is greater than 0, its value is the value of the third expression (right) from the # operator */

class Quaternary: public SubExpression {
public:
    Quaternary(Expression* left, Expression* mid1, Expression* mid2, Expression* right): SubExpression(left, mid1, mid2, right) {
    }
    double evaluate()  {
       return (left->evaluate() < 0) ? mid1->evaluate() : (left->evaluate() == 0) ? mid2->evaluate() : right->evaluate();
    }
};
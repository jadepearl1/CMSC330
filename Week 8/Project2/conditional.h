/* Jade Pearl
10/10/2023
Project 2
CMSC 330 Fall Session 1

The conditional.h file consists of the Conditional class which is a subclass of SubExpression. It creates a Conditional object by calling
the SubExpression constructor. Its evaluate function first examines the left expression. if the left expression is not 0, it then shares
the value of the first expression after the ? operator. If left is 0, then the value of the expression is the value of the second
expression after the ? operator. */

class Conditional: public SubExpression {
public:
    Conditional(Expression* left, Expression* mid1, Expression* right): SubExpression(left, mid1, right) {
    }
    double evaluate()  {
        return left->evaluate() ? mid1->evaluate() : right->evaluate();
    }
};
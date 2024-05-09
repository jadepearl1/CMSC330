/* Jade Pearl
10/9/2023
Project 2
CMSC 330 Fall Session 1

The negate.h file consists of the Negate class which is a subclass of SubExpression. It creates a Negate object by calling
the SubExpression constructor. The negation operator (the unary expression ~) is a postfix operator which evaluates an
expression to the left of it. The evaluate function returns the negation of the left expression */

class Negate: public SubExpression {
public:
    Negate(Expression* left, Expression* right): SubExpression(left, right) {
    }
    double evaluate()  {
        // the negation operator is a postfix operator so we are evaluating the number to the left of the operator
       return 0 - left->evaluate();
    }
};
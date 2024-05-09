/*Jade Pearl
10/9/2023
Project 2
CMSC 330 Fall Session 1

The multiply.h file contains a Multiply class which is a subclass to SubExpression. It calls the SubExpression constructor
and its evaluate function takes the product of two expressions, the left and right expressions. */

class Multiply: public SubExpression {
public:
    Multiply(Expression* left, Expression* right): SubExpression(left, right) {
    }
    double evaluate()  {
       return left->evaluate() * right->evaluate();
    }
};
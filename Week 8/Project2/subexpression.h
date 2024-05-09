// CMSC 330 Advanced Programming Languages
// Project 2 Skeleton
// UMGC CITE
// Spring 2023

// This file contains the class definition of the SubExpression class, which is a subclass of Expression.
// Because it does not implement the abstract function evalauate, it is an abstract class. SubExpression
// objects are represented with the left and right subexpressions. The body of its constructor and the
// static (class) function parse are defined in subexpression.cpp.

/* Jade Pearl modified this file. Last modified on 10/11/2023. Added two new constructors for accepting
mid1 and mid2 arguments and added two new variables: mid1 and mid2*/

class SubExpression: public Expression {
public:
    SubExpression(Expression* left, Expression* right);
    SubExpression(Expression* left, Expression* mid1, Expression* right);
    SubExpression(Expression* left, Expression* mid1, Expression* mid2, Expression* right);
    static Expression* parse(stringstream& in);
protected: 
    Expression* left;
    Expression* right;
    Expression* mid1;
    Expression* mid2;
};
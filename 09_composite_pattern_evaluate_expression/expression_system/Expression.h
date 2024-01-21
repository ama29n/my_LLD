#include "./ExpressionSystem.h"
#include "../operation/Operation.h"

class Expression : public ExpressionSystem {
private:
    ExpressionSystem *left;
    ExpressionSystem *right;
    Operation op;
public:
    
    // constructor
    Expression(ExpressionSystem *_left, ExpressionSystem *_right, Operation _op) {
        left = _left;
        right = _right;
        op = _op;
    }

    // virtual function
    int evaluate() override {
        int l = left->evaluate();
        int r = right->evaluate();
        if(op == Operation::add) {
            return l + r;
        } else if(op == Operation::subtract) {
            return l - r;
        } else if(op == Operation::divide) {
            return l / r;
        } else if(op == Operation::multiply) {
            return l * r;
        } else {
            return -1;
        }
    }
};

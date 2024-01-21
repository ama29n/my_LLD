#include "./ExpressionSystem.h"

class Number : public ExpressionSystem {
private:
    int num;
public:
    
    // constructor
    Number(int _num) {
        num = _num;
    }

    // virtual function
    int evaluate() override {
        return num;
    }
};

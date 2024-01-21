#include "ToppingDecorator.h"
#include "../base/PizzaBase.h"

class CornToppingDecorator : public ToppingDecorator {
public:

    // has-a PizzaBase
    PizzaBase *pizza;
    
    // constructor injection
    CornToppingDecorator(PizzaBase *_pizza) {
        pizza = _pizza;
    }

    // method to get pizza cost
    int getCost() override {
        int corn_cost = 10;
        return pizza->getCost() + corn_cost;
    }
};
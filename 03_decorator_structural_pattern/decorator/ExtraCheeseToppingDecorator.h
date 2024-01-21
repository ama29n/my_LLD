#include "ToppingDecorator.h"
#include "../base/PizzaBase.h"

class ExtraCheeseToppingDecorator : public ToppingDecorator {
public:

    // has-a PizzaBase
    PizzaBase *pizza;
    
    // constructor injection
    ExtraCheeseToppingDecorator(PizzaBase *_pizza) {
        pizza = _pizza;
    }

    // method to get pizza cost
    int getCost() override {
        int extra_cheese_cost = 30;
        return pizza->getCost() + extra_cheese_cost;
    }
};
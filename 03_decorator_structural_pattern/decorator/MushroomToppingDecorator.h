#include "ToppingDecorator.h"
#include "../base/PizzaBase.h"

class MushroomToppingDecorator : public ToppingDecorator {
public:

    // has-a PizzaBase
    PizzaBase *pizza;
    
    // constructor injection
    MushroomToppingDecorator(PizzaBase *_pizza) {
        pizza = _pizza;
    }

    // method to get pizza cost
    int getCost() override {
        int mushroom_cost = 20;
        return pizza->getCost() + mushroom_cost;
    }
};
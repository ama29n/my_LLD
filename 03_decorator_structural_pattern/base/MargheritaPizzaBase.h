#include "PizzaBase.h"

class MargheritaPizzaBase : public PizzaBase {
public:

    // method to get pizza cost
    int getCost() override {
        return 100;
    }
};
#include "PizzaBase.h"

class VeggieDelightPizzaBase : public PizzaBase {
public:

    // method to get pizza cost
    int getCost() override {
        return 110;
    }
};
#include "PizzaBase.h"

class FarmhousePizzaBase : public PizzaBase {
public:

    // method to get pizza cost
    int getCost() override {
        return 120;
    }
};
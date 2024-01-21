#include <iostream>

#include "./base/PizzaBase.h"
#include "./base/FarmhousePizzaBase.h"
#include "./base/MargheritaPizzaBase.h"
#include "./base/VeggieDelightPizzaBase.h"
#include "./decorator/CornToppingDecorator.h"
#include "./decorator/ExtraCheeseToppingDecorator.h"
#include "./decorator/MushroomToppingDecorator.h"

using namespace std;

// Structural design patterns explain how to assemble objects and classes into larger structures, 
// while keeping these structures flexible and efficient. 

int main() {
    PizzaBase *myPizza = new MushroomToppingDecorator(new CornToppingDecorator(new FarmhousePizzaBase()));
    cout << myPizza->getCost();
}
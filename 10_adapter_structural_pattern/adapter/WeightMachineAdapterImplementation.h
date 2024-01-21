#include "./WeightMachineAdapter.h"
#include "../adaptee/BabiesWeightMachine.h"
#include "../adaptee/WeightMachine.h"

class WeightMachineAdapterImplementation : public WeightMachineAdapter {
private:
    WeigthMachine *machine;
public:

    WeightMachineAdapterImplementation() {
        machine = new BabiesWeigthMachine();
    }

    double getWeightInKg() override {
        return machine->getWeightInPound() * 0.45;
    }
};
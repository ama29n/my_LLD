#include <iostream>

#include "./State.h"

#include "../VendingMachine.h"
#include "../vending_machine_structure/Item.h"
#include "../vending_machine_structure/Coin.h"

using namespace std;

class IdleState : public State {
public:
    
    IdleState() {
        cout << "Machine is in idle state" << endl;
    }

    IdleState(VendingMachine *machine) {
        cout << "Machine is in idle state" << endl;
        // machine->setCoinList({});
    }

    
};


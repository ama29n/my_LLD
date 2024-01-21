#include <vector>

#include "../VendingMachine.h"
#include "../vending_machine_structure/Item.h"
#include "../vending_machine_structure/Coin.h"

using namespace std;

#ifndef STATE_H_
#define STATE_H_

class State {
public:
    virtual void clickOnInsertCoinButton(VendingMachine *machine) = 0;
    virtual void clickOnStartProductSelectionButton(VendingMachine *machine) = 0;
    virtual void insertCoin(VendingMachine *machine, Coin *coin) = 0;
    virtual void chooseProduct(VendingMachine *machine, int codeNumber) = 0;
    virtual void getChange(int returnChangeMoney) = 0;
    virtual Item* dispenseProduct() = 0;
    virtual vector<Coin *> refundFullMoney(VendingMachine *machine) = 0;
};

#endif
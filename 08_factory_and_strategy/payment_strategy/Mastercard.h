#include <iostream>

#include "./PaymentStrategy.h"

using namespace std;

#ifndef MASTERCARD_H_
#define MASTERCARD_H_

class Mastercard : public PaymentStrategy {
public:

    // method to make payment
    void doPayment() override {
        cout << "MasterCard Payment Strategy" << endl;
    }
};

#endif
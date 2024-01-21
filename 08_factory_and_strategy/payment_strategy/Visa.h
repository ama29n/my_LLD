#include <iostream>

#include "./PaymentStrategy.h"

using namespace std;

#ifndef VISA_H_
#define VISA_H_

class Visa : public PaymentStrategy {
public:

    // method to make payment
    void doPayment() override {
        cout << "Visa Payment Strategy" << endl;
    }
};

#endif
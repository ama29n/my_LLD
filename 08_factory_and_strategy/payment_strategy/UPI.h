#include <iostream>

#include "./PaymentStrategy.h"

using namespace std;

#ifndef UPI_H_
#define UPI_H_

class UPI : public PaymentStrategy {
public:

    // method to make payment
    void doPayment() override {
        cout << "UPI Payment Strategy" << endl;
    }
};

#endif
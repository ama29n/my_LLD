#ifndef PAYMENTSTRATEGY_H_
#define PAYMENTSTRATEGY_H_

class PaymentStrategy {
public:

    // method to make payment
    virtual void doPayment() = 0;
};

#endif
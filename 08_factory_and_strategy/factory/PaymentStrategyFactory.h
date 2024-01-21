#include "../payment_strategy/Mastercard.h"
#include "../payment_strategy/UPI.h"
#include "../payment_strategy/Visa.h"
#include "../payment_strategy/PaymentStrategy.h"

#ifndef PAYMENTSTRATEGYFACTORY_H_
#define PAYMENTSTRATEGYFACTORY_H_

// factory to decide payment strategy

class PaymentStrategyFactory {
    public:
    PaymentStrategy* getPaymentStrategyType(string type) {
        if(type == "mastercard") {
            return new Mastercard();
        }
        else if(type == "upi") {
            return new UPI();
        }
        else if(type == "visa") {
            return new Visa();
        }
        else {
            return nullptr;
        }
    }
};

#endif
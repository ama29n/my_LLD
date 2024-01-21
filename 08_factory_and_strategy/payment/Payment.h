#include "../payment_strategy/PaymentStrategy.h"
#include "../application_strategy/ApplicationStrategy.h"

#ifndef PAYMENT_H_
#define PAYMENT_H_

class Payment {
private:
    PaymentStrategy *obj1;
    ApplicationStrategy *obj2;

public:

    Payment() {}

    // constructor injection
    Payment(PaymentStrategy *_obj1, ApplicationStrategy *_obj2) {
        obj1 = _obj1;
        obj2 = _obj2;
    }

    // method to show features
    void showFeatures() {
        obj1->doPayment();
        obj2->install();
    }
};

#endif
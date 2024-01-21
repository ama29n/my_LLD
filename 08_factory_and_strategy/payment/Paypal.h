#include "./Payment.h"
#include "../factory/PaymentStrategyFactory.h"
#include "../factory/ApplicationStrategyFactory.h"
#include "../payment_strategy/PaymentStrategy.h"
#include "../application_strategy/ApplicationStrategy.h"

class Paypal : public Payment {
public:
    Paypal(string type1, string type2) : Payment(createPaymentStrategyFactory()->getPaymentStrategyType(type1), createAppFactory()->getApplicationStrategyType(type2)) {
        
    }
    PaymentStrategyFactory *createPaymentStrategyFactory() {
        return new PaymentStrategyFactory();
    }
    ApplicationStrategyFactory *createAppFactory() {
        return new ApplicationStrategyFactory();
    }
};
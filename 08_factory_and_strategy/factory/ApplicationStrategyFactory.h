#include "../application_strategy/Android.h"
#include "../application_strategy/IOS.h"
#include "../application_strategy/ApplicationStrategy.h"

#ifndef APPLICATIONSTRATEGYFACTORY_H_
#define APPLICATIONSTRATEGYFACTORY_H_

// factory to decide application strategy

class ApplicationStrategyFactory {
public:
    ApplicationStrategy *getApplicationStrategyType(string type) {
        if (type == "android") {
            return new Android();
        } else if (type == "ios") {
            return new IOS();
        } else {
            return nullptr;
        }
    }
};

#endif
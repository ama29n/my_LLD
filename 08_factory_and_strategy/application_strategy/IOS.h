#include <iostream>

#include "./ApplicationStrategy.h"

using namespace std;

#ifndef IOS_H_
#define IOS_H_

class IOS : public ApplicationStrategy {
public:

    // method of application
    void install() override {
        cout << "IOS Install Strategy" << endl;
    }
};

#endif
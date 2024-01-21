#include <iostream>

#include "./ApplicationStrategy.h"

using namespace std;

#ifndef ANDROID_H_
#define ANDROID_H_

class Android : public ApplicationStrategy {
public:

    // method of application
    void install() override {
        cout << "Android Install Strategy" << endl;
    }
};

#endif
#include <bits/stdc++.h>

#include "DriveStrategy.h"

using namespace std;

class NormalDriveStrategy : public DriveStrategy {
public:
    void drive() override {
        cout << "Normal Drive Implimenting Drive Strategy" << endl;
    }
};

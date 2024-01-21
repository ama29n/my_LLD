#include <iostream>

#include "./Notification.h"

using namespace std;

class PushNotification : public Notification {
public:

    // method to get push notification
    void getNotification() override {
        cout << "Push Notification" << endl;
    }
};
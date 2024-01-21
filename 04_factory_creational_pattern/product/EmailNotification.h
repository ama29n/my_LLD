#include <iostream>

#include "./Notification.h"

using namespace std;

class EmailNotification : public Notification {
public:

    // method to get email notification
    void getNotification() override {
        cout << "Email Notification" << endl;
    }
};
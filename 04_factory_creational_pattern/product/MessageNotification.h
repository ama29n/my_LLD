#include <iostream>

#include "./Notification.h"

using namespace std;

class MessageNotification : public Notification {
public:

    // method to get message notification
    void getNotification() override {
        cout << "Message Notification" << endl;
    }
};
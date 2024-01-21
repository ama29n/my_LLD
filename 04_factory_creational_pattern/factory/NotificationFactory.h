#include <string>

#include "../product/Notification.h"
#include "../product/EmailNotification.h"
#include "../product/MessageNotification.h"
#include "../product/PushNotification.h"

// factory class takes the responsibility of deciding the type of notification

class NotificationFactory {
public:

    // method to return Notification object on the basis of certain conditions
    Notification* createNotification(string type) {
        if(type == "email") {
            return new EmailNotification();
        } else if(type == "message") {
            return new MessageNotification();
        } else if(type == "push") {
            return new PushNotification();
        } else {
            return nullptr;
        }
    }
};
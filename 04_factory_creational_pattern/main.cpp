#include <bits/stdc++.h>

#include "./product/Notification.h"
#include "./factory/NotificationFactory.h"

using namespace std;

// Creational design patterns provide various object creation mechanisms, which increase flexibility and reuse of existing code. 

// Factory Method is a creational design pattern that provides an interface for creating objects in a superclass, 
// but allows subclasses to alter the type of objects that will be created.

// The factory design pattern is used when we have a superclass with multiple subclasses and based on input, we need to return one of the subclass. 
// This pattern takes out the responsibility of the instantiation of a class from the client program to the factory class.

int main() {
    NotificationFactory *factory = new NotificationFactory();
    Notification *notif = factory->createNotification("email");
    notif->getNotification();
}
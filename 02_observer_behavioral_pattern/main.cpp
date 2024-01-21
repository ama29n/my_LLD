#include <bits/stdc++.h>

#include "observable/IphoneStockObservable.h"
#include "observer/EmailAlertObserver.h"
#include "observer/MessageAlertObserver.h"

using namespace std;

int main() {
    IphoneStockObservable *obj = new IphoneStockObservable();
    MessageAlertObserver *user_1 = new MessageAlertObserver(obj);
    EmailAlertObserver *user_2 = new EmailAlertObserver(obj);
    obj->setUpdate(10); 
}
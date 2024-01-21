#include "../observer/AlertObserver.h"

#ifndef STOCKOBSERVABLE_H_
#define STOCKOBSERVABLE_H_

class StockObservable {
public:

    // methods to add and remove observer
    virtual void add(AlertObserver *obj) = 0;
    virtual void remove(AlertObserver *obj) = 0;

    // method to notify observer
    virtual void notify() = 0;

    // method to get update request from observer and return available stock count
    virtual int getUpdate() = 0;

    // method to update the stock
    virtual void setUpdate(int) = 0;
};

#endif
#include <bits/stdc++.h>

#include "StockObservable.h"
#include "../observer/AlertObserver.h"

using namespace std;

class IphoneStockObservable : public StockObservable {
private:
    int availableCount;
    unordered_set<AlertObserver *> observerList;
public:

    // default constructor to set the stock count = 0
    IphoneStockObservable() {
        availableCount = 0;
    }

    // method to add observer
    void add(AlertObserver *obj) override {
        observerList.insert(obj);
    }

    // method to remove observer
    void remove(AlertObserver *obj) override {
        observerList.erase(obj);
    }

    // method to notify the observers
    void notify() override {
        for(auto it : observerList) {
            it->update();
        }
    }

    // method to get update request from observer and return available stock count
    int getUpdate() override {
        return availableCount;
    }

    // method to update the stock count; if stock count = 0 while updating, notify all observers
    void setUpdate(int count) override {
        int oldCount = availableCount;
        availableCount += count;
        if(oldCount == 0) {
            notify();
        }
    }   
};
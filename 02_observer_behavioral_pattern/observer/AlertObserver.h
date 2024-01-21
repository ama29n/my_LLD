#ifndef ALERTOBSERVER_H_
#define ALERTOBSERVER_H_

class AlertObserver {
public:

    // method to get updates from observable
    virtual void update() = 0;
};

#endif
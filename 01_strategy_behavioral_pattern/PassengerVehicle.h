#include "Vehicle.h"
#include "strategy/NormalDriveStrategy.h"

class PassengerVehicle : public Vehicle {
public:
    PassengerVehicle() : Vehicle(new NormalDriveStrategy()) {
        
    }
};

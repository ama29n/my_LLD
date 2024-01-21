#include "Vehicle.h"
#include "strategy/SpecialDriveStrategy.h"

class SportsVehicle : public Vehicle {
public:
    SportsVehicle() : Vehicle(new SpecialDriveStrategy()) {
        
    }
};

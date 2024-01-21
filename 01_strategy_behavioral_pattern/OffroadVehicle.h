#include "Vehicle.h"
#include "strategy/SpecialDriveStrategy.h"

class OffroadVehicle : public Vehicle {
public:
    OffroadVehicle() : Vehicle(new SpecialDriveStrategy()) {
        
    }
};

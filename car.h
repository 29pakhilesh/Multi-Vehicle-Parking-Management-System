#ifndef CAR_H
#define CAR_H
#include "vehicleBase.h"
#include <cmath>

class CarVehicle : public VehicleBase {
public:
    double computeCharges(double h) override {
        if(h <= 1) return 40;
        if(h <= 3) return 110;
        if(h <= 5) return 180;
        return 180 + (ceil(h - 5) * 30);
    }
};

#endif

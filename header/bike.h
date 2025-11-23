#ifndef BIKE_H
#define BIKE_H
#include "vehicleBase.h"
#include <cmath>

class BikeVehicle : public VehicleBase {
public:
    double computeCharges(double h) override {
        if(h <= 1) return 20;
        if(h <= 3) return 60;
        if(h <= 5) return 100;
        return 100 + (ceil(h - 5) * 15);
    }
};

#endif

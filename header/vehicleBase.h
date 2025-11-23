#ifndef VB_H
#define VB_H
#include <string>

class VehicleBase {
public:
    virtual double computeCharges(double hrs) = 0;  // ABSTRACT
    virtual ~VehicleBase() {}
};

#endif


#ifndef VEHICLE_H
#define VEHICLE_H
#include <string>
#include <ctime>
struct Vehicle{
 std::string vehicleNo,type;
 time_t entryTime;
 Vehicle(const std::string&n,const std::string&t,time_t e=time(0)):vehicleNo(n),type(t),entryTime(e){}
};
struct History{
 std::string vehicleNo,type;
 time_t entryTime,exitTime;
 double finalPrice;
};
#endif

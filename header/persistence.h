#ifndef PERS_H
#define PERS_H
#include <vector>
#include "vehicle.h"
void loadData(std::vector<Vehicle>&,std::vector<History>&,int&,int&,int&,double&);
void saveData(const std::vector<Vehicle>&,const std::vector<History>&,int,int,int,double);
#endif
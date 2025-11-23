
#include <iostream>
#include <algorithm>
#include "parkVehicle.h"
#include "vehicle.h"
using namespace std;
void parkVehicle(vector<Vehicle>&v,int &cc,int&cb,int&tv,int&tc,int&tb,int MC,int MB){
 string t,no; 
 cout<<"Enter vehicle type (Car/Bike): "; cin>>t;
 transform(t.begin(),t.end(),t.begin(),::toupper);
 if(t!="CAR"&&t!="BIKE"){cout<<"Invalid.\n";return;}
 if(t=="CAR"&&cc>=MC){cout<<"Car full.\n";return;}
 if(t=="BIKE"&&cb>=MB){cout<<"Bike full.\n";return;}
 cout<<"Enter vehicle number: "; cin>>no;
 v.emplace_back(no,t,time(0));
 if(t=="CAR"){cc++;tc++;} else {cb++;tb++;}
 tv++;
 cout<<"Vehicle parked.\n";
}

#include <iostream>
#include <ctime>
#include "removeVehicle.h"
#include "../include/billing.h"
#include "../include/receipt.h"
#include "../include/utils.h"

// NEW FILES FOR POLYMORPHISM
#include "../include/vehicleBase.h"
#include "../include/car.h"
#include "../include/bike.h"

using namespace std;

void removeVehicle(vector<Vehicle>&v,vector<History>&h,int &cc,int&cb,double&rev){
    if(v.empty()){cout<<"No vehicles.\n";return;}

    cout<<"1.Car 2.Bike: ";
    int o; cin>>o;
    string t=(o==1?"CAR":o==2?"BIKE":"");

    if(t==""){cout<<"Invalid\n";return;}

    vector<int> idx;
    for(int i=0;i<v.size();i++)
        if(v[i].type==t) idx.push_back(i);

    if(idx.empty()){cout<<"None parked.\n";return;}

    cout<<"Select:\n";
    for(int i=0;i<idx.size();i++)
        cout<<i+1<<". "<<v[idx[i]].vehicleNo<<" ("<<formatTimestamp(v[idx[i]].entryTime)<<")\n";

    int s; cin>>s;
    if(s<1||s>idx.size()){cout<<"Invalid\n";return;}

    int id=idx[s-1];
    Vehicle x=v[id];

    time_t out=time(0);
    double d=difftime(out,x.entryTime)/3600.0;

    // *** POLYMORPHISM HERE ***
    VehicleBase* obj = (x.type=="CAR")
        ? (VehicleBase*)new CarVehicle()
        : (VehicleBase*)new BikeVehicle();

    double price = obj->computeCharges(d);
    delete obj;

    if(x.type=="CAR") cc--;
    else cb--;

    rev += price;

    h.push_back({x.vehicleNo,x.type,x.entryTime,out,price});

    cout<<"Vehicle exited.\n";
    printReceiptInclusiveGST("Sunrise Mall Parking","PayFast",
                             x.vehicleNo,x.type,x.entryTime,out,price);

    v.erase(v.begin()+id);
}


#include <iostream>
#include <vector>
#include "vehicle.h"
#include "constant.h"
#include "parkVehicle.h"
#include "removeVehicle.h"
#include "displayAll.h"
#include "showHistory.h"
#include "showStats.h"
#include "pricing.h"
#include "persistence.h"
using namespace std;

void menu(){
 cout<<"===============================================\n";
 cout<<"###       PARKING MANAGEMENT SYSTEM        ###\n";
 cout<<"===============================================\n";
 cout<<"[1] Park Vehicle\n[2] Remove Vehicle\n[3] Display Parked Vehicles\n[4] Parking History\n[5] Statistics\n[6] Pricing Table\n[7] Exit\n";
 cout<<"===============================================\nEnter choice: ";
}

int main(){
 vector<Vehicle> v; vector<History> h;
 int cc=0,cb=0,tv=0,tc=0,tb=0;
 double rev=0;

 loadData(v,h,tc,tb,tv,rev);

 int c;
 while(true){
    menu();
    cin>>c;
    switch(c){
        case 1: parkVehicle(v,cc,cb,tv,tc,tb,MAX_CARS,MAX_BIKES); break;
        case 2: removeVehicle(v,h,cc,cb,rev); break;
        case 3: displayAll(v); break;
        case 4: showHistory(h); break;
        case 5: showStats(tv,tc,tb,rev); break;
        case 6: showPricingTable(); break;
        case 7: saveData(v,h,tc,tb,tv,rev); return 0;
        default: cout<<"Invalid.\n"; 
    }
 }
}

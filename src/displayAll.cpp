
#include <iostream>
#include "../include/displayAll.h"
#include "../include/utils.h"
using namespace std;
void displayAll(const vector<Vehicle>&v){
 if(v.empty()){cout<<"No vehicles.\n";return;}
 for(auto &x:v)
  cout<<x.vehicleNo<<" ("<<x.type<<") "<<formatTimestamp(x.entryTime)<<"\n";
}

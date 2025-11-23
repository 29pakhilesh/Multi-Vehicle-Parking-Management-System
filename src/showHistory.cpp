
#include <iostream>
#include "../include/showHistory.h"
#include "../include/utils.h"
using namespace std;
void showHistory(const vector<History>&h){
 if(h.empty()){cout<<"No history.\n";return;}
 for(auto &x:h)
   cout<<x.vehicleNo<<" "<<x.type<<" IN:"<<formatTimestamp(x.entryTime)
       <<" OUT:"<<formatTimestamp(x.exitTime)<<" ₹"<<x.finalPrice<<"\n";
}

#include <iostream>
#include <iomanip>
#include "showStats.h"
using namespace std;
void showStats(int tv,int tc,int tb,double r){
 cout<<"Cars: "<<tc<<" Bikes: "<<tb<<" Total: "<<tv<<" Revenue: ₹"<<fixed<<setprecision(2)<<r<<"\n";
}
#include "../include/billing.h"
#include <cmath>
double round2(double x){return round(x*100)/100;}
double calculateCharges(const std::string&t,double d){
 if(d<=0.25)return 0;
 if(d<=1)return t=="CAR"?40:20;
 if(d<=3)return t=="CAR"?110:60;
 if(d<=5)return t=="CAR"?180:100;
 double e=ceil(d-5);
 return t=="CAR"?180+e*30:100+e*15;
}
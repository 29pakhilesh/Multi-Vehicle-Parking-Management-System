
#include <iostream>
#include <iomanip>
#include "../include/receipt.h"
#include "../include/utils.h"
#include "../include/billing.h"
using namespace std;

void printReceiptInclusiveGST(const string&ps,const string&pp,const string&no,const string&t,time_t en,time_t ex,double price){
 double base=round2(price/1.18);
 double gst=round2(price-base);
 double cg=gst/2, sg=gst/2;
 int h=int(difftime(ex,en)/3600);
 int m=int((difftime(ex,en)/60))%60;

 cout<<"===============================================\n";
 cout<<"                "<<ps<<"\n";
 cout<<"        (Payment Partner: "<<pp<<")\n";
 cout<<"===============================================\n";
 cout<<"Receipt ID: "<<no<<"_"<<ex<<"\n";
 cout<<"Vehicle No: "<<no<<"\n";
 cout<<"Type      : "<<t<<"\n";
 cout<<"Entry     : "<<formatTimestamp(en)<<"\n";
 cout<<"Exit      : "<<formatTimestamp(ex)<<"\n";
 cout<<"Duration  : "<<h<<" hr "<<m<<" min\n";
 cout<<"-----------------------------------------------\n";
 cout<<"Base Amount           : ₹"<<base<<"\n";
 cout<<"CGST 9%               : ₹"<<cg<<"\n";
 cout<<"SGST 9%               : ₹"<<sg<<"\n";
 cout<<"-----------------------------------------------\n";
 cout<<"TOTAL PAYABLE         : ₹"<<price<<"\n";
 cout<<"===============================================\n";
 cout<<"Thank you for choosing "<<ps<<"!\n";
 cout<<"===============================================\n";
}

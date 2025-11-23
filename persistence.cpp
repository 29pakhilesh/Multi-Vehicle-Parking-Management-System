#include "../include/persistence.h"
#include "../include/vehicle.h"
#include <fstream>
#include <iostream>
using namespace std;

void loadData(vector<Vehicle>&v,vector<History>&h,int&tc,int&tb,int&tv,double&rev){

    try {
        ifstream f("parked.txt");
        if(!f) throw runtime_error("parked.txt missing");

        string tag,no,t; long en;
        while(f>>tag>>no>>t>>en)
            v.emplace_back(no,t,en);

        f.close();
    }
    catch(const exception& e){
        cout << "Error loading parked.txt: " << e.what() << "\n";
    }

    try {
        ifstream f2("history.txt");
        if(!f2) throw runtime_error("history.txt missing");

        string tag,no,t; long en,ex; double pr;
        while(f2>>tag>>no>>t>>en>>ex>>pr)
            h.push_back({no,t,en,ex,pr});

        f2.close();
    }
    catch(const exception& e){
        cout << "Error loading history.txt: " << e.what() << "\n";
    }

    try {
        ifstream f3("stats.txt");
        if(!f3) throw runtime_error("stats.txt missing");

        string k;
        f3>>k>>tc>>k>>tb>>k>>tv>>k>>rev;
    }
    catch(const exception& e){
        cout << "Error loading stats.txt: " << e.what() << "\n";
    }
}


void saveData(const vector<Vehicle>&v,const vector<History>&h,
              int tc,int tb,int tv,double rev){

    try {
        ofstream f("parked.txt");
        if(!f) throw runtime_error("cannot write parked.txt");

        for(auto &x:v)
            f<<"VEHICLE "<<x.vehicleNo<<" "<<x.type<<" "<<x.entryTime<<"\n";

        f.close();
    }
    catch(const exception& e){
        cout << "Save error: " << e.what() << "\n";
    }

    try {
        ofstream f2("history.txt");
        if(!f2) throw runtime_error("cannot write history.txt");

        for(auto &x:h)
            f2<<"HISTORY "<<x.vehicleNo<<" "<<x.type<<" "
              <<x.entryTime<<" "<<x.exitTime<<" "<<x.finalPrice<<"\n";

        f2.close();
    }
    catch(const exception& e){
        cout << "Save error: " << e.what() << "\n";
    }

    try {
        ofstream f3("stats.txt");
        if(!f3) throw runtime_error("cannot write stats.txt");

        f3<<"CARS "<<tc<<"\nBIKES "<<tb<<"\nTOTAL "<<tv<<"\nREVENUE "<<rev;
    }
    catch(const exception& e){
        cout << "Save error: " << e.what() << "\n";
    }
}

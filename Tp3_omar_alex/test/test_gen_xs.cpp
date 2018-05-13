#include <iostream>
#include "gtest/gtest.h"
#include "../src/ParkMiller.hpp"
#include "../src/GenerateurXorShift.hpp"
#include "../src/Dvector.h"
#include <fstream>
using namespace std;

bool periode(Dvector vect){

    for(int i = 0; i<vect.size(); i++){
        if (i%1000==0){cout<<i<<endl;}
        for(int j = i+1; j<vect.size(); j++){
            if(vect(i) == vect(j)){
                cout<<vect(i)<<"  "<<vect(j)<<endl;
                cout<<"i : "<< i<<" j : "<<j<<endl; 
                return true;
            }
        }
    }
    return false;
}
int main(){
    ofstream myfile;
    myfile.open("../../dataXor.txt");
    GenerateurXorShift genxs= GenerateurXorShift(500);
    Dvector vectalea = genxs.generate();
    vectalea.display(myfile);
    myfile.close();
    //cout<<periode(vectalea)<<endl;
    //cout<<vectalea<<endl;
    return 0;


}
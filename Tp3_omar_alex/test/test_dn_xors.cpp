#include <iostream>
#include "../src/DistributionNormale.hpp"
#include "../src/GenerateurXorShift.hpp"

XorShift pm = XorShift();
GenerateurXorShift generator1 = GenerateurXorShift(1000);


int main(){
    DistributionNormale dn = DistributionNormale(6, 6, generator1, 1000);
    cout << "Variance :" <<endl;
    cout << dn.var()<<endl; 
    cout << "Moyenne :" << endl;
    cout << dn.mean()<<endl;
}
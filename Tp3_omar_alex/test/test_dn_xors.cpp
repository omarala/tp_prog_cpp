#include <iostream>
#include "../src/DistributionNormale.hpp"
#include "../src/GenerateurXorShift.hpp"

XorShift pm = XorShift();
GenerateurXorShift generator1 = GenerateurXorShift(100);


int main(){
    DistributionNormale dn = DistributionNormale(5, 6, generator1, 100);
    cout << "Variance :" <<endl;
    cout << dn.var()<<endl; 
    cout << "Moyenne :" << endl;
    cout << dn.mean()<<endl;
}
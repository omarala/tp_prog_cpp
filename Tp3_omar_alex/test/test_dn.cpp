#include <iostream>
#include "../src/DistributionNormale.hpp"
#include "../src/GenerateurParkMiller.hpp"

ParkMiller pm = ParkMiller();
GenerateurParkMiller generator1 = GenerateurParkMiller(10000);


int main(){
    DistributionNormale dn = DistributionNormale(5, 6, generator1, 10000);
    cout << "Variance :" <<endl;
    cout << dn.var()<<endl; 
    cout << "Moyenne :" << endl;
    cout << dn.mean()<<endl;
}
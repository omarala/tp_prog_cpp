#include <iostream>
#include "../src/DistributionNormale.hpp"
#include "../src/GenerateurParkMiller.hpp"

ParkMiller pm = ParkMiller();
GenerateurParkMiller generator1 = GenerateurParkMiller(100);


int main(){
    DistributionNormale dn = DistributionNormale(5, 6, generator1, 100);
    cout << dn.var()<<endl; 
    cout << dn.mean()<<endl;
    cout << dn.get_tab() <<endl;
    cout <<pm.generate_int()<<endl;
}
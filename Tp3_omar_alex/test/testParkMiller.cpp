#include <iostream>
#include <ctime>
#include <cstdlib>
#include <fstream>
#include <cstring>
#include <cassert>
#include "../src/Dvector.h"
#include "../src/ParkMiller.hpp"

using namespace std;

int main(){
    ParkMiller park = ParkMiller(3);
    cout<< "premier nb_aleatoire : "<<park.generate_int()<<endl;
    cout<< "second nb_aleatoire : " <<park.generate_int()<<endl;
    cout<< "troisieme nb_aleatoire : "<<park.generate_int()<<endl;

}
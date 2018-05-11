#include <iostream>
#include "ParkMiller.hpp"
#include "GenerateurNombreAleatoire.hpp"
#include <assert.h>
using namespace std;

#define a 16807
#define m 2147483647
#define q 1127773
#define r 2836

ParkMiller::ParkMiller(){
    this->seed = 1;
    this->seed0 = 1;    
}

ParkMiller::ParkMiller(int seed){
    assert(seed > 0);
    this->seed = seed;
    this->seed0 = seed;    
}

ParkMiller::ParkMiller(const ParkMiller & toCopy){
    this->seed = toCopy.seed;
    this->seed0 = toCopy.seed0;    
}

void ParkMiller::set_seed(int seed){
    if (seed > 0){
        this->seed = seed;
    }
}

int ParkMiller::get_seed() const{
    return this->seed;
}

void ParkMiller::reset_seed() {
    this->seed = this->seed0;
}


int ParkMiller::generate_int(){
    this->seed = (a*(seed - (seed/q)*q) -r*(seed/q))%m;
    return this->seed;
}


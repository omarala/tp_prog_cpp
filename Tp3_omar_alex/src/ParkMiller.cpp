#include <iostream>
#include "ParkMiller.hpp"
#include "GenerateurNombreAleatoire.hpp"

using namespace std;

#define a 16807
#define m 2147483647
#define q 1127773
#define r 2836

ParkMiller::ParkMiller(){
    this->seed = 0;
}

ParkMiller::ParkMiller(int seed){
    this->seed = seed;
}

ParkMiller::ParkMiller(const ParkMiller & toCopy){
    this->seed = toCopy.seed;
}

int ParkMiller::generate_int(){
    this->seed = (a*(seed - (seed/q)*q) -r*(seed/q))%m;
    return this->seed;
}

void ParkMiller::set_seed(int seed){
    this->seed = seed;
}

int ParkMiller::get_seed(){
    return seed;
}

void ParkMiller::reset_seed(){
    seed = 0;
}
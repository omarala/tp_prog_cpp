#include <iostream>
#include "ParkMiller.hpp"
#include "GenerateurNombreAleatoire.hpp"

using namespace std;

#define a 16807
#define m 2147483647
#define q 1127773
#define r 2836

ParkMiller::ParkMiller():GenerateurNombreAleatoire(){
    this->seed = 0;
}

ParkMiller::ParkMiller(int seed):GenerateurNombreAleatoire(1){
    this->seed = seed;
}

ParkMiller::ParkMiller(const ParkMiller & toCopy):GenerateurNombreAleatoire(toCopy){
    this->seed = toCopy.seed;
}

int ParkMiller::generate_int(){
    this->seed = (a*(seed - (seed/q)*q) -r*(seed/q))%m;
    return this->seed;
}

Dvector& ParkMiller::generate(){
    Dvector* returnVect = new Dvector(this->get_dim());
    for(int i = 0; i<this->get_dim(); i++){
        (*returnVect)(i) = generate_int();
    }
    return returnVect;
}
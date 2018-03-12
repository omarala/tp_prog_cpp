#include <iostream>
#include "ParkMiller.hpp"
#include "GenerateurNombreAleatoire.hpp"

using namespace std;

ParkMiller::ParkMiller():GenerateurNombreAleatoire(){
    this->seed = 0;
}

ParkMiller::ParkMiller(int seed):GenerateurNombreAleatoire(1){
    this->seed = seed;
}

ParkMiller::ParkMiller(const ParkMiller & toCopy):GenerateurNombreAleatoire(toCopy){
    this->seed = toCopy.seed;
}
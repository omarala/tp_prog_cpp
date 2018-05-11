#include <iostream>
#include "GenerateurParkMiller.hpp"

using namespace std;

GenerateurParkMiller::GenerateurParkMiller():GenerateurNombreAleatoire(){
}

GenerateurParkMiller::GenerateurParkMiller(int dim):GenerateurNombreAleatoire(dim){
}

GenerateurParkMiller::GenerateurParkMiller(const GenerateurParkMiller & toCopy):GenerateurNombreAleatoire(toCopy){
}

Dvector GenerateurParkMiller::generate(){
    Dvector vector = Dvector(this->get_dim());
    for (int i = 0; i < this->get_dim(); i++) {
        vector(i) = this->pm.generate_int();
    }
    return vector;
}

void GenerateurParkMiller::set_seed(int seed){
    if (seed > 0){
    this->pm.set_seed(seed);
    }
}

int GenerateurParkMiller::get_seed(){
    return this->pm.get_seed();
}

void GenerateurParkMiller::reset_seed(){
    this->pm.reset_seed();
}



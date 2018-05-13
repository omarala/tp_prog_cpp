#include <iostream>
#include "GenerateurNombreAleatoire.hpp"

using namespace std;

GenerateurNombreAleatoire::GenerateurNombreAleatoire(){
    this->dim = 1;
    this->rand_max = 1;
}

GenerateurNombreAleatoire::GenerateurNombreAleatoire(int dim, int rand_max){
    this->dim = dim;
    this->rand_max = rand_max;
}

GenerateurNombreAleatoire::GenerateurNombreAleatoire(const GenerateurNombreAleatoire & toCopy){
    this->dim = toCopy.dim;
    this->rand_max = toCopy.rand_max;
}

GenerateurNombreAleatoire::~GenerateurNombreAleatoire(){}

int GenerateurNombreAleatoire::get_dim() {
    return this->dim;
}

int GenerateurNombreAleatoire::get_rand_max(){
    return rand_max;
}

void GenerateurNombreAleatoire::set_dim(int dim){
    //assert(dim >= 0, "dim doit etre positif");
    this->dim = dim;
}

GenerateurNombreAleatoire& GenerateurNombreAleatoire::clone(const GenerateurNombreAleatoire & toCopy){
    this->dim = toCopy.dim;
    return *this;
}




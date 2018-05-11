#include <iostream>
#include "GenerateurNombreAleatoire.hpp"

using namespace std;

GenerateurNombreAleatoire::GenerateurNombreAleatoire(){
    this->dim = 1;
}

GenerateurNombreAleatoire::GenerateurNombreAleatoire(int dim){
    this->dim = dim;
}

GenerateurNombreAleatoire::GenerateurNombreAleatoire(const GenerateurNombreAleatoire & toCopy){
    this->dim = toCopy.dim;
}

GenerateurNombreAleatoire::~GenerateurNombreAleatoire(){}

int GenerateurNombreAleatoire::get_dim() {
    return this->dim;
}

void GenerateurNombreAleatoire::set_dim(int dim){
    //assert(dim >= 0, "dim doit etre positif");
    this->dim = dim;
}

GenerateurNombreAleatoire& GenerateurNombreAleatoire::clone(const GenerateurNombreAleatoire & toCopy){
    this->dim = toCopy.dim;
    return *this;
}




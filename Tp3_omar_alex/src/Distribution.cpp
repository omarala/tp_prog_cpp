#include <iostream>
#include "Distribution.hpp"

using namespace std;

Distribution::Distribution(){
    this->dim = 0;
}

Distribution::Distribution(int dim){
    this->dim = dim;
    this->tableau = Dvector(dim);
}

Distribution::Distribution(const Distribution & toCopy){
    this->dim = toCopy.dim;
    this->tableau = toCopy.tableau;
}

Distribution::~Distribution(){
}

int Distribution::get_dim() {
    return this->dim;
}

void Distribution::set_dim(int dim){
    //assert(dim >= 0, "dim doit etre positif");
    this->dim = dim;
}

Dvector Distribution::get_tab(){
    return this->tableau;
}
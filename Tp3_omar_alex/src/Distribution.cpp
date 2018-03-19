#include <iostream>
#include "Distribution.hpp"

using namespace std;

Distribution::Distribution(){
    this->dim = 0;
}

Distribution::Distribution(int dim){
    this->dim = dim;
}

Distribution::Distribution(const Distribution & toCopy){
    this->dim = toCopy.dim;
}

Distribution::~Distribution(){}

int Distribution::get_dim() {
    return this->dim;
}

void Distribution::set_dim(int dim){
    //assert(dim >= 0, "dim doit etre positif");
    this->dim = dim;
}

Distribution& Distribution::clone(const Distribution & toCopy){
    this->dim = toCopy.dim;
    return *this;
}

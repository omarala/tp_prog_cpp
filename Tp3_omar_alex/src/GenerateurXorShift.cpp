#include <iostream>
#include "XorShift.hpp"
#include "GenerateurNombreAleatoire.hpp"
#include "GenerateurXorShift.hpp"

using namespace std;

GenerateurXorShift::GenerateurXorShift():GenerateurNombreAleatoire(1, 0xFFFFFFFFFFFFFFFF){
    this->genxor = XorShift();
}

GenerateurXorShift::GenerateurXorShift(int dim):GenerateurNombreAleatoire(dim, 0xFFFFFFFFFFFFFFFF){
    this->genxor = XorShift();
}

GenerateurXorShift::GenerateurXorShift(const GenerateurXorShift & toCopy):GenerateurNombreAleatoire(toCopy){
    this->genxor = toCopy.genxor;
}

Dvector GenerateurXorShift::generate(){
    Dvector v = Dvector(this->get_dim());
    for(int i; i<this->get_dim(); i++){
        v(i) = genxor.generate_int();
    }
    return v;

}

void GenerateurXorShift::set_seed(int seed){
    if (seed > 0){
        this->genxor.set_seed(seed);
    }
}

int GenerateurXorShift::get_seed(){
    return this->genxor.get_seed();
}

void GenerateurXorShift::reset_seed() {
    this->genxor.reset_seed();
}
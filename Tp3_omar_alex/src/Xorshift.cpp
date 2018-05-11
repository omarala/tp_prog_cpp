#include <iostream>
#include "Xorshift.hpp"
#include "GenerateurNombreAleatoire.hpp"
#include <assert.h>

using namespace std;

#define a1 21
#define a2 35
#define a3 4

Xorshift::Xorshift(){
    this->seed = 1;
    this->seed0 = 1;    
}

Xorshift::Xorshift(int seed){
    assert ( seed > 0);
    this->seed = seed;
    this->seed0 = seed;    
}

Xorshift::Xorshift(const Xorshift & toCopy){
    this->seed = toCopy.seed;
    this->seed0 = toCopy.seed0;    
}

void Xorshift::set_seed(int seed){
    if (seed >= 0){
        this->seed = seed;
    }
}

int Xorshift::get_seed() const{
    return this->seed;
}

void Xorshift::reset_seed() {
    this->seed = this->seed0;
}


int Xorshift::generate_int(){
    this->seed = this->seed ^ (this->seed << a1);
    this->seed = this->seed ^ (this->seed >> a2);
    this->seed = this->seed ^ (this->seed << a3);
    return this->seed;
}


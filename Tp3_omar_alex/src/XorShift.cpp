#include <iostream>
#include "XorShift.hpp"
#include "GenerateurNombreAleatoire.hpp"
#include <assert.h>

using namespace std;

#define a1 21
#define a2 35
#define a3 4

XorShift::XorShift(){
    this->seed = 1;
    this->seed0 = 1;    
}

XorShift::XorShift(int seed){
    assert ( seed > 0);
    this->seed = seed;
    this->seed0 = seed;    
}

XorShift::XorShift(const XorShift & toCopy){
    this->seed = toCopy.seed;
    this->seed0 = toCopy.seed0;    
}

void XorShift::set_seed(int seed){
    if (seed >= 0){
        this->seed = seed;
    }
}

int XorShift::get_seed() const{
    return this->seed;
}

void XorShift::reset_seed() {
    this->seed = this->seed0;
}


int XorShift::generate_int(){
    this->seed = this->seed ^ (this->seed << a1);
    this->seed = this->seed ^ (this->seed >> a2);
    this->seed = this->seed ^ (this->seed << a3);
    return this->seed;
}


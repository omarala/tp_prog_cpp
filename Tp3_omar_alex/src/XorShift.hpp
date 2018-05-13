#ifndef XORSHIFT_HPP
#define XORSHIFT_HPP

#include "stdint.h"
#include "GenerateurNombreAleatoire.hpp"

class XorShift{
    private:
    uint64_t seed;
    int seed0; //le seed initial, pour pouvoir revenir avec reset_seed
    
    public:
    XorShift();
    XorShift(int seed);
    XorShift(const XorShift & toCopy);
    // ~XorShift();

    uint64_t generate_int();
    void set_seed(int seed);
    int get_seed() const;
    void reset_seed();
};





#endif
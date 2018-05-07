#ifndef XORSHIFT_HPP
#define XORSHIFT_HPP

#include "GenerateurNombreAleatoire.hpp"

class Xorshift{
    private:
    int seed;
    int seed0; //le seed initial, pour pouvoir revenir avec reset_seed
    
    public:
    Xorshift();
    Xorshift(int seed);
    Xorshift(const Xorshift & toCopy);
    ~Xorshift();

    int generate_int();
    void set_seed(int seed);
    int get_seed() const;
    void reset_seed();
};





#endif
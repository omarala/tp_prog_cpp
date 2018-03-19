#ifndef XORSHIFT_HPP
#define XORSHIFT_HPP

#include "GenerateurNombreAleatoire.hpp"

class Xorshift:GenerateurNombreAleatoire{
    private:
    int seed;
    int seed0; //le seed initial, pour pouvoir revenir avec resert_seed
    
    public:
    Xorshift();
    Xorshift(int seed);
    Xorshift(const Xorshift & toCopy);
    ~Xorshift();
    Dvector& generate();
    int generate_int();
    void set_seed(int seed);
    int get_seed() const;
    void reset_seed();
};





#endif
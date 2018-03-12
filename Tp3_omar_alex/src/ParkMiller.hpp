#ifndef PARKMILLER_HPP
#define PARKMILLER_HPP

#include "GenerateurNombreAleatoire.hpp"

class ParkMiller:GenerateurNombreAleatoire{
    private:
    int seed;
    
    public:
    ParkMiller();
    ParkMiller(int seed);
    ParkMiller(const ParkMiller & toCopy);
    ~ParkMiller();

    void set_seed(int seed);
    int get_seed();
    void reset_seed();
};





#endif
#ifndef GENERATEURPARKMILLER_HPP
#define GENERATEURPARKMILLER_HPP

#include <iostream>
#include "Dvector.h"
#include "GenerateurNombreAleatoire.hpp"
#include "ParkMiller.hpp"

class GenerateurParkMiller: public GenerateurNombreAleatoire{
    private:
    ParkMiller pm;

    public:
    GenerateurParkMiller();
    GenerateurParkMiller(int dim);
    GenerateurParkMiller(const GenerateurParkMiller & toCopy);
    Dvector generate();
    void set_seed(int seed);
    int get_seed();
    void reset_seed();
};




#endif
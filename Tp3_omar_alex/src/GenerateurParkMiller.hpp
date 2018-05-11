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
    ~GenerateurParkMiller();
    Dvector generate();
    void set_seed(int seed) = 0;
    int get_seed() = 0;
    void reset_seed() = 0;
};




#endif
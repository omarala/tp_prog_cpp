#ifndef GENERATEURNOMBREALEATOIRE_HPP
#define GENERATEURNOMBREALEATOIRE_HPP

#include <iostream>
#include "Dvector.h"

class GenerateurNombreAleatoire{
    private:
    int dim;
    int rand_max;

    public:
    GenerateurNombreAleatoire();
    GenerateurNombreAleatoire(int dim, int rand_max);
    GenerateurNombreAleatoire(const GenerateurNombreAleatoire & toCopy);
    ~GenerateurNombreAleatoire();
    int get_dim();
    void set_dim(int dim);
    GenerateurNombreAleatoire & clone(const GenerateurNombreAleatoire & toCopy);
    int get_rand_max();
    virtual Dvector generate() = 0;
    virtual void set_seed(int seed) = 0;
    virtual int get_seed() = 0;
    virtual void reset_seed() = 0;
};


    

#endif
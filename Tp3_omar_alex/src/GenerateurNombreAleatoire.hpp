#ifndef GENERATEURNOMBREALEATOIRE_HPP
#define GENERATEURNOMBREALEATOIRE_HPP

#include <iostream>
#include "Dvector.h"

class GenerateurNombreAleatoire{
    private:
    int dim;

    public:
    GenerateurNombreAleatoire(int dim);
    GenerateurNombreAleatoire(const GenerateurNombreAleatoire & toCopy);
    ~GenerateurNombreAleatoire();
    int get_dim();
    void set_dim();
    GenerateurNombreAleatoire & clone(const GenerateurNombreAleatoire & toCopy);
    Dvector & generate();
    void set_seed();
    int get_seed();
    void reset_seed();
}




#endif
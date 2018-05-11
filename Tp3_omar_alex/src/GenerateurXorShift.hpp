#ifndef GENERATEURXORSHIFT_HPP
#define GENERATEURXORSHIFT_HPP

#include <iostream>
#include "Dvector.h"
#include "XorShift.hpp"

class GenerateurXorShift:public GenerateurNombreAleatoire{
    private:
    XorShift genxor;

    public:
    GenerateurXorShift();
    GenerateurXorShift(int dim);
    GenerateurXorShift(const GenerateurXorShift & toCopy);
    ~GenerateurXorShift();
    Dvector & generate();
    void set_seed(int seed);
    int get_seed();
    void reset_seed();
};




#endif
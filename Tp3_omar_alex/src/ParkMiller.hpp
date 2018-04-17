#ifndef PARKMILLER_HPP
#define PARKMILLER_HPP

#include "Dvector.h"

class ParkMiller{
    private:
    int seed;
    
    public:
    ParkMiller();
    ParkMiller(int seed);
    ParkMiller(const ParkMiller & toCopy);
    ~ParkMiller();

    int generate_int();
    
    void set_seed(int seed);
    int get_seed();
    void reset_seed();
};





#endif
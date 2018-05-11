#ifndef DISTRIBUTIONNORMALE_HPP
#define DISTRIBUTIONNORMALE_HPP

#include "Distribution.hpp"
#include <iostream>
#include "ParkMiller.hpp"
#include "XorShift.hpp"
#include "GenerateurNombreAleatoire.hpp"

class DistributionNormale: public Distribution{
    private:
    double moyenne;
    double variance;
    
    public:
    DistributionNormale();
    DistributionNormale(double moyenne, double variance, GenerateurNombreAleatoire & gen, int dim);
    DistributionNormale(const Distribution & toCopy);
    double mean();
    double var();
    double cdf(double x);
    double pdf(double x);
    double stdev();
    double inv_cdf(double x);

};

#endif
#ifndef DISTRIBUTIONNORMALE_HPP
#define DISTRIBUTIONNORMALE_HPP

#include "Distribution.hpp"
#include <iostream>
#include "ParkMiller.hpp"
#include "Xorshift.hpp"
#include "GenerateurNombreAleatoire.hpp"

class DistributionNormale: public Distribution{
    private:
    double mean;
    double variance;
    
    public:
    DistributionNormale();
    DistributionNormale(double mean, double variance, GenerateurNombreAleatoire & gen);
    DistributionNormale(const Distribution & toCopy);
    ~DistributionNormale();
    int get_dim();
    void set_dim(int dim);
    void random_draws(ParkMiller generator1, Xorshift generator2);
    double get_mean();
    double get_variance();
    double cdf(double x);
    double pdf(double x);
    double stdev();
    double inv_cdf(double x);

};

#endif
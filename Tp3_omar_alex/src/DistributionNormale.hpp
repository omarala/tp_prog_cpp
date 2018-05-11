#ifndef DISTRIBUTIONNORMALE_HPP
#define DISTRIBUTIONNORMALE_HPP

#include "Distribution.hpp"
#include <iostream>

class DistributionNormale: public Distribution{
    public:
    void random_draws();
    double get_mean();
    double get_variance();
    double cdf(double x);
    double pdf(double x);
    double stdev();
    double inv_cdf(double x);

};

#endif
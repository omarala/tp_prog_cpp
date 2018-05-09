#ifndef DISTRIBUTIONNORMALE_HPP
#define DISTRIBUTIONNORMALE_HPP

#include "Distribution.hpp"
#include <iostream>

class DistributionNormale:public Distribution{
    void random_draws();
    double get_mean();
    double get_variance();
    void cdf();
    void pdf();
    void stdev();
    void inv_cdf();

};

#endif
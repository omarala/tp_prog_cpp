#ifndef DISTRIBUTION_HPP
#define DISTRIBUTION_HPP

#include <iostream>
#include "Dvector.h"

class Distribution{
    private:
    int dim;
    Dvector tableau;
    
    public:
    Distribution();
    Distribution(int dim);
    Distribution(const Distribution & toCopy);
    ~Distribution();
    int get_dim();
    void set_dim(int dim);
    Dvector get_tab();
    virtual double mean() = 0;
    virtual double var() = 0;
    virtual double cdf(double x) = 0;
    virtual double pdf(double x) = 0;
    virtual double stdev() = 0;
    virtual double inv_cdf(double x) = 0;
};


#endif
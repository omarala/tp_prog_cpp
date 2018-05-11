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
    virtual void random_draws();
    virtual double get_mean();
    virtual double get_variance();
    virtual double cdf(double x);
    virtual double pdf(double x);
    virtual double stdev();
    virtual double inv_cdf(double x);
};


#endif
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
    Distribution & clone(const Distribution & toCopy);
    virtual void random_draws();
    virtual double get_mean();
    virtual double get_variance();
    virtual void cdf();
    virtual void pdf();
    virtual void stdev();
    virtual void inv_cdf();
};


#endif
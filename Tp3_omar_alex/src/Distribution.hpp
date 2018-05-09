#ifndef DISTRIBUTION_HPP
#define DISTRIBUTION_HPP

#include <iostream>

class Distribution{
    private:
    int dim;

    public:
    int tableau[];
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
#include <iostream>
#include "DistributionNormale.hpp"
#include "ParkMiller.hpp"
#include "Xorshift.hpp"
#include <cmath>

using namespace std;
#define PI  3.14159265359

ParkMiller generator1 = ParkMiller(0);
Xorshift generator2 = Xorshift(0);

void DistributionNormale::random_draws(Distribution dist){
    for (int i = 0; i < dist.get_dim(); i++){
        dist.tableau(i) = sqrt(-2*log(generator1.generate_int()))*cos(2*PI*generator2.generate_int());    
    }
}

double DistributionNormale::get_mean(){
    double mean = 0;
    for (int i = 0; i < this->get_dim(); i++){
        mean += this->tableau(i);
    }
    mean /= this->get_dim();
    return mean;
}

double DistributionNormale::get_variance(){
    double temp = 0;
    double mean = this->get_mean();
    for (int i = 0; i < this->get_dim(); i++){
        temp += (temp - this->tableau(i))*(temp - this->tableau(i));
    }
    temp /= (this->get_dim() - 1);
    return temp;
}

double DistributionNormale::cdf(double x){
    double sum = 0;
    for (int i = 0; i < this->get_dim(); i++){
        if (this->tableau(i) < x) {
            sum+= 1;
        }
    }
    sum /= this->get_dim();
    return sum;
}

double DistributionNormale::pdf(double x){
    return 1/(this->stdev()*sqrt(2*PI))*exp(-( (x - this->get_mean())*(x - this->get_mean()) /2/this->get_variance() ));
}

double DistributionNormale::stdev(){
    return sqrt(this->get_variance());
}

double DistributionNormale::inv_cdf(double x){
    this->tableau.sort();
    int s = 0;
    int i = 0;
    while (s < this->tableau(i)){
        i += 1;
    }
    return this->tableau(s);
}
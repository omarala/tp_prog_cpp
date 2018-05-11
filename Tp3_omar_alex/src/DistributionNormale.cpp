#include <iostream>
#include "DistributionNormale.hpp"
#include "ParkMiller.hpp"
#include "Xorshift.hpp"
#include <cmath>

using namespace std;
#define PI  3.14159265359
#define m 2147483647
#define m2 18446744073709551615


DistributionNormale::DistributionNormale():Distribution(){
    this->mean = 0;
    this->variance = 1;
}

DistributionNormale::DistributionNormale(double mean, double variance, GenerateurNombreAleatoire & gen, int dim):Distribution(dim){
    this->mean = mean;
    this->variance = variance;
    
    for (int i = 0; i < this->get_dim(); i++){
        this->tableau(i) = mean+sqrt(variance)*sqrt(-2*log(gen.generate_int())/m)*cos(2*PI*gen.generate_int()/m2);    
    }
}

DistributionNormale::DistributionNormale(const Distribution & toCopy){
}

void DistributionNormale::random_draws(ParkMiller generator1, Xorshift generator2){
    for (int i = 0; i < this->get_dim(); i++){
        this->tableau(i) = sqrt(-2*log(generator1.generate_int())/m)*cos(2*PI*generator2.generate_int()/m2);    
    }
}

double DistributionNormale::get_mean(){
    return this->mean;
}

double DistributionNormale::get_variance(){
    return this->variance;
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
#include <iostream>
#include "DistributionNormale.hpp"
#include "ParkMiller.hpp"
#include "XorShift.hpp"
#include <cmath>

using namespace std;
#define PI  3.14159265359
#define m 2147483647
long long int m2 = 18446744073709551615LL;


DistributionNormale::DistributionNormale():Distribution(){
    this->moyenne = 0;
    this->variance = 1;
}

DistributionNormale::DistributionNormale(double moyenne, double variance, GenerateurNombreAleatoire & gen, int dim):Distribution(dim){
    this->moyenne = moyenne;
    this->variance = variance;
    Dvector vect_gen = gen.generate();
    Dvector vect_gen2 = gen.generate();
    for (int i = 0; i < this->get_dim(); i++){
        this->set_tab(i,moyenne+sqrt(variance)*sqrt(-2*log((double)vect_gen(i)/m))*cos(2*PI*(double)vect_gen2(i)/m)); 
    }
}

DistributionNormale::DistributionNormale(const Distribution & toCopy):Distribution(toCopy){
}

    //  void DistributionNormale::random_draws(ParkMiller generator1, Xorshift generator2){
    //     for (int i = 0; i < this->get_dim(); i++){
    //         this->tableau(i) = sqrt(-2*log(generator1.generate_int())/m)*cos(2*PI*generator2.generate_int()/m2);    
    //     }
    // }

double DistributionNormale::mean(){
    double sum = 0;
    for (int i = 0; i < this->get_dim(); i++){
        sum += this->get_tab()(i);
    }
    return sum / this->get_dim();
}

double DistributionNormale::var(){
    double variance = 0;
    for (int i = 0; i < this->get_dim(); i++){
        variance += (this->get_tab()(i)-this->mean())*(this->get_tab()(i)-this->mean());
    }
    return variance / (this->get_dim()-1);
}

double DistributionNormale::cdf(double x){
    double sum = 0;
    for (int i = 0; i < this->get_dim(); i++){
        if (this->get_tab()(i) < x) {
            sum+= 1;
        }
    }
    sum /= this->get_dim();
    return sum;
}

double DistributionNormale::pdf(double x){
    return 1/(this->stdev()*sqrt(2*PI))*exp(-( (x - this->moyenne)*(x - this->moyenne) /2/this->var() ));
}

double DistributionNormale::stdev(){
    return sqrt(this->var());
}

double DistributionNormale::inv_cdf(double x){
    this->get_tab().sort();
    int s = 0;
    int i = 0;
    while (s < this->get_tab()(i)){
        i += 1;
    }
    return this->get_tab()(s);
}
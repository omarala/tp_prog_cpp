#include <iostream>
#include "DistributionNormale.hpp"
#include "ParkMiller.hpp"
#include "Xorshift.hpp"
#include <cmath>

using namespace std;
#define PI = 3.14159265359

ParkMiller generator1 = ParkMiller(0);
Xorshift generator2 = Xorshift(0);

void random_draws(Distribution dist){
    for (int i = 0; i < dist.get_dim(); i++){
        dist.tableau[i] = sqrt(-2*log(generator1.generate_int()))*cos(2*PI*generator2.generate_int());    
    }
}

double DistributionNormale::get_mean(){
    double mean = 0;
    for (int i = 0; i < this->get_dim(); i++){
        mean += this->tableau[i];
    }
    mean /= this->get_dim();
    return mean;
}

double get_variance(){
    double temp = 0;
    double mean = this->get_mean();
    for (int i = 0; i < this->get_dim(); i++){
        temp += (temp - this->tableau[i])**2 
    }
    temp /= (this->get_dim - 1);
    return temp;
}

double cdf(double x){
    double sum = 0;
    for (int i = 0; i < this->get_dim(); i++){
        if (this->tableau[i] < x) {
            sum+= 1;
        }
    }
    sum /= this->get_dim;
    return sum;
}

void pdf(){

}

double stdev(){
    return sqrt(this.get_variance());
}

void inv_cdf(){

}
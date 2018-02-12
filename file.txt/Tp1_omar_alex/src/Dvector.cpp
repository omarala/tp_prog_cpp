#include <iostream>
#include <ctime>
#include <cstdlib>
#include <fstream>
#include "Dvector.h"

using namespace std;

int Dvector::size(){
    return this->dim;
}

void Dvector::display(std::ostream &str){
    for(int i = 0 ; i<this->size(); i++){
        str<<vect[i]<< " ";
    }
    str<<endl;
}

void Dvector::fillRandomly(){
    for(int i = 0; i<this->size(); i++){
        this->vect[i] = ((double)rand())/RAND_MAX;
    }
}

Dvector::Dvector(){
    this->vect = NULL;
    this->dim = 0;
    cout<<"default constructor"<<endl;
}

Dvector::Dvector(int dim, double default_val){
    this->vect = new double[dim];
    this->dim = dim;
    for(int i = 0; i <this->dim; i++){
        vect[i] = default_val;
    }
    cout<<"parameted constructor"<<endl;
}

Dvector::Dvector(string file_name){
    ifstream infile;
    infile.open(file_name.c_str());
    if(!infile){
        cerr<<"unable to open \"" << file_name<<"\""<< endl;
        exit(1);
    }
}
Dvector::Dvector(Dvector const & toCopy){
    this->vect = toCopy.vect;
    this->dim = toCopy.dim;
}
Dvector::~Dvector(){
    cout<<"destructor"<<endl;
    delete [] this->vect;
}


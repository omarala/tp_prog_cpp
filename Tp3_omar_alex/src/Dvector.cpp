#include <iostream>
#include <ctime>
#include <cstdlib>
#include <fstream>
#include <cstring>
#include <cassert>
#include "Dvector.h"
#include <algorithm>

using namespace std;
int MAXLINE = 256;

/**
 * Const method: enable the method size to be called
 * on const object
 */
int Dvector::size() const{
    return this->dim;
}

void Dvector::display(std::ostream &str){
    for(int i = 0 ; i<this->size(); i++){
        str<<vect[i]<<endl;
    }
}

void Dvector::fillRandomly(){
    for(int i = 0; i<this->size(); i++){
        this->vect[i] = ((double)rand())/RAND_MAX;
    }
}

double* Dvector::getVect() const{
    return vect;
}

Dvector::Dvector(){
    this->vect = NULL;
    this->dim = 0;
    //cout<<"default constructor"<<endl;
}

Dvector::Dvector(int dim, double default_val){
    // assert(dim>0, && "dim doit etre positif strictement");
    this->vect = new double[dim];
    this->dim = dim;
    for(int i = 0; i <this->dim; i++){
        vect[i] = default_val;
    }
    //cout<<"parameted constructor"<<endl;
}

Dvector::Dvector(string file_name){
    ifstream infile;
    infile.open(file_name.c_str());
    if(!infile){
        cerr<<"unable to open \"" << file_name<<"\""<< endl;
        exit(1);
    }
    int nb_lines = 0;
    double var;
    while (!infile.eof()){
        ++nb_lines;
        infile >> var;
    }
    infile.seekg(0, ios::beg);

    this->dim = nb_lines;
    this->vect = new double[nb_lines];
    char line[MAXLINE];
    for(int i = 0; i<nb_lines; i++){
        infile.getline(line, MAXLINE);
        this->vect[i] = atof(line);
    }
    infile.close();
    
}

void Dvector::resize(int size){
    if (size != dim){
        dim = size;
        double * newVect = new double[dim];
        memcpy(newVect, vect, dim*sizeof(double));
        vect = newVect;
    }

}
/**
 * Surcharge externe de l'operateur flux
 */

ostream & operator <<(ostream &stream, const Dvector& vector){
    for(int i = 0 ; i<vector.size(); i++){
        stream<<vector(i)<<", ";
    }
    stream<<endl;
    return stream;
}

istream & operator >>(istream &stream, Dvector vector){
    for(int i = 0 ; i<vector.size(); i++){
        stream>>vector(i);
    }
    return stream;
}
// Surcharge de l'opérateur += (à réutiliser pour +)
Dvector & Dvector::operator +=(const Dvector & toAdd){
    for (int i = 0; i<toAdd.size(); i++){
        this->vect[i] += toAdd(i);
    }
    return *this;
}
// Surcharge de l'opérateur -= (à réutiliser pour -)
Dvector & Dvector::operator -=(const Dvector & toSubb){
    for (int i = 0; i<toSubb.size(); i++){
        this->vect[i] -= toSubb(i);
    }
    return *this;    
}

/**
 * Surcharge de l'opérateur = avec memcopy
 */
Dvector & Dvector::operator = (const Dvector & toCopy){
    dim = toCopy.size();
    vect = new double[dim];
    memcpy(vect, toCopy.vect, dim*sizeof(double));
    return *this;
}
/**
 * Operateur de negatif
 */
Dvector Dvector::operator -(){
    Dvector returnVect(this->size());
    returnVect -= *this;
    return returnVect;
}
/**
 * Surcharge externe de add
 */
Dvector operator +(const Dvector & vect1, const Dvector & vect2){
    Dvector returnVect(vect1);
    returnVect += vect2;
    return returnVect;
}
/**
 * Surcharge externe  de subb
 */
Dvector operator -(const Dvector & vect1, const Dvector & vect2){
    Dvector returnVect = vect1;
    returnVect -= vect2;
    return returnVect;
}

Dvector::Dvector(const Dvector & toCopy){
    //assert
    this->dim = toCopy.dim;
    this->vect = new double[dim];
    memcpy(vect, toCopy.vect, dim*sizeof(double));
}
Dvector::~Dvector(){
    // cout<<"destructor"<<endl;
    delete [] this->vect;
}

/** 
* surcharge d'operateur ()
*/
double & Dvector::operator ()(int i) const{
    //assert((0 <= i <= (this.size() - 1), && "this number is not between 0 and the size of the vector");
    return vect[i];
}

double & Dvector::operator ()(int i){
    //assert((0 <= i <= (this.size() - 1), && "this number is not between 0 and the size of the vector");
    return vect[i];
}

/**
* surcharge d'operateur addition par un reel
*/
Dvector & Dvector::operator+=(const double x){
    for (int i = 0; i < this->dim; i++){
        this->vect[i] += x;
    }
    return *this;
}

Dvector operator+(const Dvector &V, const double x){
    Dvector doubleVect(V);
    doubleVect += x;
    return doubleVect;
}

Dvector operator+(const double x, const Dvector &V){
    Dvector doubleVect(V);
    doubleVect += x;
    return doubleVect;
}

/**
* surcharge d'operateur soustraction par un reel
*/
Dvector & Dvector::operator -=(double x){
    for (int i = 0; i < this->dim; i++){
        this->vect[i] -= x;
    }
    return *this;
}

Dvector operator-(const Dvector &V, const double x){
    Dvector doubleVect(V);
    doubleVect *= (-1.0);
    doubleVect += x;
    return doubleVect;
}

Dvector operator-(const double x, const Dvector &V){
    Dvector doubleVect(V);
    doubleVect -= x;
    return doubleVect;
}

/**
* surcharge d'operateur multiplication par un reel
*/
Dvector & Dvector::operator *=(double x){
    for (int i = 0; i < this->dim; i++){
        this->vect[i] *= x;        
    }
    return *this;
}

Dvector operator*(const Dvector &V, const double x){
    Dvector doubleVect(V);
    doubleVect *= x;
    return doubleVect;
}

Dvector operator*(const double x, const Dvector &V){
    Dvector doubleVect(V);
    doubleVect *= x;
    return doubleVect;
}

/**
* surcharge d'operateur division par un reel
*/
Dvector & Dvector::operator /=(double x){
    Dvector &W = *this;
    for (int i = 0; i < W.size(); i++){
        W(i) /= x;
    }
    return *this;
}

Dvector operator/(const Dvector &V, const double x){
    Dvector doubleVect(V);
    doubleVect /= x;
    return doubleVect;
}

bool Dvector::operator ==(const Dvector &V) const{
    if (this->dim != V.dim){
        return false;
    } else {
        for (int i = 0; i < this->dim; i++){
            if (this->vect[i] != V.vect[i]){
                return false;
            }
        }
    }
    return true;
}

void Dvector::sort(){
    std::sort(this->getVect(), this->getVect() + this->size());
}
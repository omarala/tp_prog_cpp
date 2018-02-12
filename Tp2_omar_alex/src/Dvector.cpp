#include <iostream>
#include <ctime>
#include <cstdlib>
#include <fstream>
#include "Dvector.h"

using namespace std;
int MAXLINE = 256;
int Dvector::size(){
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
int nb_line(string file_name){
    int nb_lines = 0;
    std::string line;
    ifstream myfile;
    myfile.open(file_name.c_str());
    if(!myfile){
        cerr<<"unable to open \"" << file_name<<"\""<< endl;
        exit(1);
    }

    while (std::getline(myfile, line)){
        ++nb_lines;
    }
    myfile.close();
    return nb_lines-1;

}
Dvector::Dvector(string file_name){
    int nb_lines = nb_line(file_name);
    this->dim = nb_lines;
    this->vect = new double[nb_lines];
    ifstream infile;
    infile.open(file_name.c_str());
    if(!infile){
        cerr<<"unable to open \"" << file_name<<"\""<< endl;
        exit(1);
    }
    char line[MAXLINE];
    for(int i = 0; i<nb_lines; i++){
        infile.getline(line, MAXLINE);
        this->vect[i] = atof(line);
    }
    infile.close();
    
 
}
/**
 * Surcharge externe de l'operateur flux
 */

ostream & operator <<(ostream &stream, Dvector vector){
    for(int i = 0 ; i<vector.size(); i++){
        stream<<vector(i);
    }
    stream<<endl;
    return stream;
}

ostream & operator >>(ostream &stream, Dvector vector){
    stream<<"enter "<<vector.size()<<" double(s) please"<<endl;
    for(int i = 0 ; i<vector.size(); i++){
        stream>>vector(i);
    }
    return stream;
}

Dvector & Dvector::operator +=(Dvector const & toAdd){
    for (int i = 0; i<toAdd.size(); i++){
        this->vect[i] += toAdd(i);
    }
}

Dvector & Dvector::operator -=(Dvector const & toSubb){
    for (int i = 0; i<toSubb.size(); i++){
        this->vect[i] -= toSubb(i);
    }
}

Dvector Dvector::operator -(Dvector const & toModify){
    Dvector returnVect(toModify.size());
    returnVect -= toModify;
    return returnVect;
}
/**
 * Surcharge externe de add
 */
Dvector operator +(Dvector const & vect1, Dvector const & vect2){
    Dvector returnVect(vect1);
    returnVect += vect2;
    return returnVect;
}
/**
 * Surcharge externe de subb
 */
Dvector operator -(Dvector const & vect1, Dvector const & vect2){
    Dvector returnVect(vect1);
    returnVect -= vect2;
    return returnVect;
}

Dvector::Dvector(Dvector const & toCopy){
    this->vect = toCopy.vect;
    this->dim = toCopy.dim;
}
Dvector::~Dvector(){
    cout<<"destructor"<<endl;
    delete [] this->vect;
}

/** 
* surcharge d'operateur ()
*/
double Dvector::operator ()(int i){
    //assert ((0 <= i <= (this.size() - 1), && "this number is not between 0 and the size of the vector");
    return this->vect[i];
}

/** 
* surcharge d'operateur ()
*/
double Dvector::operator ()(int i) const{
    //assert ((0 <= i <= (this.size() - 1), && "this number is not between 0 and the size of the vector");
    return this->vect[i];
}

/**
* surcharge d'operateur addition par un reel
*/
Dvector & Dvector::operator+=(double x){
    Dvector W(*this);
    for (int i = 0; i < W.size(); i++){
        W(i) += x;
    }
    return W;
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
    Dvector W(*this);
    for (int i = 0; i < W.size(); i++){
        W(i) -= x;
    }
    return W;
}

Dvector operator-(const Dvector &V, const double x){
    Dvector doubleVect(V);
    doubleVect -= x;
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
    Dvector W(*this);
    for (int i = 0; i < W.size(); i++){
        W(i) *= x;
    }
    return W;
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
    for (int i = 0; i < this->dim; i++){
        this->vect[i] /= i;
    }
}

Dvector operator/(const Dvector &V, const double x){
    Dvector doubleVect(V);
    doubleVect /= x;
    return doubleVect;
}

  int main(){
    Dvector v("file.txt");
    //assert(v.size() == 3);
    cout<<"size : "<<v.size()<<endl;
    cout<<"vector : "<<endl;
    v.display();
    v.fillRandomly();
    cout<<"random redistribution : "<<endl;
    v.display();

}
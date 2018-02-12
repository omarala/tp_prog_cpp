/**
 * File: DVector.hpp
 * @Author Omar & Alex
 */

#ifndef DVECTOR_H
#define DVECTOR_H

#include <iostream>
using namespace std;

/**
 * @class Dvector 
 * @brief vect : one dimension array
 *        dim : size of the array
 *        method size : returns the size
 *        method display : display the array
 */
class Dvector{
    private:
    int dim;
    double* vect; 

    public:
    // returns the size
    int size();
    // displays the array
    void display(ostream &str=cout);
    // random filler
    void fillRandomly();

    // Surcharge d'operateur
    Dvector & operator += (Dvector const & toAdd);
    Dvector & operator -= (Dvector const & toSubb);
    Dvector operator - (Dvector const & toModify);
    // default constructor
    Dvector();
    // constructor
    Dvector(int dim, double default_val = 0.);
    // constructor from a file
    Dvector(string file_name);
    // constructor by copy
    Dvector(Dvector const & toCopy);
    ~Dvector();
    // accession au ieme element 
    double operator ()(int i);
    double operator ()(int i) const;
    // addition par un reel
    Dvector & operator +=(double x);
    // soustraction par un reel
    Dvector & operator -=(double x);
    // multiplication par un reel
    Dvector & operator *=(double x);
    // division par un reel
    Dvector & operator /=(double x);
    
    
    
    
    

    

};



#endif
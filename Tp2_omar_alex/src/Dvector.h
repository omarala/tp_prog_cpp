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
    int size() const;
    // displays the array
    void display(ostream &str=cout);
    // random filler
    void fillRandomly();
    // gett for vect
    double* getVect() const;

    void resize(int size);

    // Surcharge d'operateur
    Dvector & operator += (const Dvector & toAdd);
    Dvector & operator -= (const Dvector & toSubb);
    Dvector operator - ();
    Dvector &operator = (const Dvector & toCopy);
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
    double & operator ()(int i) const;
    double & operator ()(int i);
    // addition par un reel
    Dvector & operator +=(double x);
    // soustraction par un reel
    Dvector & operator -=(double x);
    // multiplication par un reel
    Dvector & operator *=(double x);
    // division par un reel
    Dvector & operator /=(double x);
    // test d'egalite
    bool operator ==(const Dvector &V) const;


};
// surcharge externe des opérateurs de flux
ostream & operator <<(ostream &stream, const Dvector& vector);
istream & operator >>(istream &stream, Dvector vector);
// surcharge externe deds opérateurs + - pour avoir une symetrie
Dvector operator +(Dvector const & vect1, Dvector const & vect2);
Dvector operator -(Dvector const & vect1, Dvector const & vect2);
// surcharge externe de l'addition et de la soustraction avec
// un double
Dvector operator+(const Dvector &V, const double x);
Dvector operator+(const double x, const Dvector &V);
Dvector operator-(const double x, const Dvector &V);
Dvector operator-(const Dvector &V, const double x);

Dvector operator*(const double x, const Dvector &V);
Dvector operator*(const Dvector &V, const double x);
Dvector operator/(const Dvector &V, const double x);



#endif
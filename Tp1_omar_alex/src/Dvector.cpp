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
Dvector::Dvector(Dvector const & toCopy){
    this->vect = toCopy.vect;
    this->dim = toCopy.dim;
}
Dvector::~Dvector(){
    cout<<"destructor"<<endl;
    delete [] this->vect;
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
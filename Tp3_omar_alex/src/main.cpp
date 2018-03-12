#include <iostream>
#include <ctime>
#include <cstdlib>
#include <fstream>
#include <cstring>
#include <cassert>
#include "Dvector.h"

using namespace std;

int main(){
    //Dvector v("file.txt");
    //assert(v.size() == 3);
    Dvector v(3);
    v+= 2;
    v*=4;
    cout<<"v : "<<v;
    Dvector v2(v);
    v2 -= 5;
    cout<<v;
    cout<<"v2 : "<<v2;
    Dvector v3 = v + v2;
    cout<<v3;
    cout<<"size : "<<v.size()<<endl;
    cout<<"vector : "<<endl;
    v.display();
    v.fillRandomly();
    cout<<"random redistribution : "<<endl;
    v.display();

}
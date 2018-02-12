#include <iostream>
#include "Dvector.h"

using namespace std;
int main(){
    Dvector v(3, 2.5);
    //assert(v.size() == 3);
    cout<<"size : "<<v.size()<<endl;
    cout<<"vector : ";
    v.display();
    v.fillRandomly();
    cout<<"random redistribution : ";
    v.display();

}
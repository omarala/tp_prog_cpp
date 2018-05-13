#include<iostream>
#include<sstream>
#include "../src/Dvector.h"

using namespace std;

int main(){
    Dvector x;
    cout<<"display"<<endl;
    stringstream str;
    x.display(str);
    cout<<"str = "<<str.str()<<endl;
    cout<<"end display"<<endl;
    x = Dvector(3, 1);
    x.display();

    Dvector y = Dvector(3, 1);
    y.display();
    return 0;
}

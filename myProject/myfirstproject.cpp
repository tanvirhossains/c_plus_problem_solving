#include "myfirstproject.h"
#include<iostream>

using namespace std;


myfirstProject :: myfirstProject()
{
    //ctor
    cout<< "inside the operator " << endl;
}

void myfirstProject:: display(){

 cout<< "inside the display " << endl;
}

// destructor c++ 72
myfirstProject :: ~myfirstProject(){
  cout<< "inside the destructor " << endl;
}

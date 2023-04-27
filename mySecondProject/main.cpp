#include <iostream>
#include "secondclass.h"

using namespace std;

int main()
{


    const secondClass ob;
    ob.display();

    // constant variable c++ 74
    const int x = 5;
    //const int x; // won't work in the constant variable
    //x = 45; //only one time can use
    cout<< x << endl;
    cout << "Hello world!" << endl;
    return 0;


}

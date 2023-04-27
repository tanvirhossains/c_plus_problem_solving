#include <iostream>
#include "myfirstproject.h"

using namespace std;

int main()
{
    myfirstProject ob;

    ob.display();

    // calling the function by selection operator c++ 73
    myfirstProject *p= &ob;
    p->display();

    cout << "\nHello world!" << endl;
    return 0;
}

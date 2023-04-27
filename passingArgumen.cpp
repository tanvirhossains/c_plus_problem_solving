#include<iostream>
#include<cstdlib>
//#include<stdlib.h>
#include<conio.h>
using namespace std;

// Passing  2 types of argument 1) passing of value 2) passing of reference .

int argument (int *num)
{
    // if i pass refernce then i have receive like= *x;
    *num = 30;
    cout<< "\n number is: "<< *num;

}
int main()
{
    int x=10;
    cout<< "\nthe value of x : "<< x;

    argument(&x); // if i sent a reference then the value will be change.
    //argument(x); // here only passin a copy of x it here x= actual value
    cout<< "\n the value of x argument: "<< x;
    getch();
}






#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    float f; //=4
    int i; // =4
    double d; //=8
    char ch; //=1
    char name[30]; //=30

    int c = sizeof(name);
    cout<<c<<endl;

    int sum = (f=20,i=30, sum= f+i); //called "," operator
    cout<<sum << endl; //=50


    // ---------------Ternary operator--------------------------

    int num;
    cout<< "Give a number :";
    cin>> num;
    (num%2==0) ?    cout<<num << "even number" : cout<< num << "odd number";

    // -----------------------------------------------------------
    getch();
}

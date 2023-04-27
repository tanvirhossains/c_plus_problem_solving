#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int a =32, b=12, c;

    c = a&b; // or relation in binary number
    cout<<c <<endl;

    c = a|b; // and relation
    cout<<c;
    cout <<endl;

    c = a^b;
    cout<<c <<endl;

    c = a>>3;
    cout<<c <<endl;

    c = a<<4;//The >> (right shift) in C or C++ takes two numbers, right shifts the bits of the first

    cout <<c<<endl;


    getch();
}

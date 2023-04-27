#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    // introduction of pointer
    int n=10;
    int *p;
    p = &n;


    cout<< n << endl;  // value
    cout<< &n << endl; // addres of the n
    cout<< p << endl; //address of the value
    cout<< *p << endl; //value of
    cout<< &p << endl; //value of


    // sum of two value using pointer
    int x=10;
    int b=17;

    int *p1 = &x, *p2=&b;

    int sum = *p1+*p2;
    cout<< sum<<endl;
    cout<<&x <<endl;  //address of the number of a =10 >>>>>> 0x61fdfc
    cout<<&b<<endl;  //address of the number of a =10 >>>>>> 0x61fdfc








    getch();
}

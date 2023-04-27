#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    double farh, cels, calvine ;

    /* cout<<"Enter Celsius :";
     cin>> cels;

     farh = 1.8 * cels + 32;
     cout << "Fahrenheit :" << farh;

     */

    // Home work getting Fahrenheit
    cout<<"enter fahrnhite :";
    cin>> farh;

    cels = (farh -32)/1.8;
    cout << "celsius :" << cels;

    // finding out calvin
    cout << "\nenter Celsius : " ;
    cin>> cels;

    calvine = cels +273;
    cout<< " \nclavine : "<< calvine;


    getch();
}

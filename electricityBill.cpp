#include<iostream>
#include<conio.h>
using namespace std;

int main()
{

    cout<< "give your elictricity unit:";
    int unit=0 ;
    double bill=0, total;
    cin>> unit;

    if(unit<=50)
    {
        bill = unit * .50;
        cout<< "\nCurrent bill under 50= "<< bill;
    }
    if (unit<=150 && unit>50)
    {
        cout<< " bill of " << unit<< " unit";
        bill = 50 *.50;
        unit = unit - 50;
        bill=  bill + unit * .75;
        cout << bill;
    }
    if(unit > 150)
    {
        cout<< " bill of " << unit<< "unit";
        bill = 120;
        unit = unit-150;
        bill = bill + unit*1.5;
        cout<< bill;

    }



    getch();
}

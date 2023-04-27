#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    double  base, height, area;

    cout<<"base :" ;
    cin>> base;

    cout<<"give height ";
    cin>> height;


    //area = 1/2 * base*height; // here 1/2 =.5 so out put will show 0 in finally
    //area = (double) 1/2 *base *height; // (double) 1/2 = will show .5 so result will show accurately.
    area = .5 * base*height;


    cout<< "area of triangle : " <<area;

    getch();
}

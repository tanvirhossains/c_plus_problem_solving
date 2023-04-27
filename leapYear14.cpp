#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int y;
    cout<<"Give a year:";
    cin>> y;

    if((y%4==0 && y%100!=0 ) && y%400==0 ){
        cout<<"This year leap year";
    }
    /*
    else if(y%400==0)
    {
        cout<<"this is leap yaer";
    }
    */
    else
    {
        cout << "this is not a leap year";
    }
    getch();
}


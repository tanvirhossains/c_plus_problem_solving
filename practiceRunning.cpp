#include<iostream>
#include<conio.h>
using namespace std;
int main()
{


    int n, first, sec, fibo, count;

    first=0;
    sec=1;
    count=0;

    cout<< "give a number to : ";
    cin>> n;

    for(int count=0; count<=n; count++)
    {

        if(count<=1)
        {
            cout<< count << " ";
        }
        else
        {
            fibo= first+sec;
            first=sec;
            sec= fibo;
            cout<< fibo<< " ";

        }



    }


    getch();
}

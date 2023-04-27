
#include<iostream>
#include <conio.h>
using namespace std;

int main()
{

    int n, row, col;
    cout<< "Enter a number to get right angle pattern: ";
    cin>> n;


    for(row =1; row<=n; row++)
    {
        for(col=1; col<=row; col++)
        {

            if(col==1 || col==row || row==n )
            {
                cout<< "*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<< endl;
    }


    getch();
}



#include<iostream>
#include <conio.h>
using namespace std;

int main()
{
    int n,num=0, row, col;
    cout<< "Enter a number of row for pattern: ";
    cin>> n;

    for(row=1; row<=n; row++)
    {
        for(col=n-1; col>=row; col--)
        {
            cout<< "  ";
        }
        for(col=1; col<=row; col++)
        {
            cout<< col << " ";
        }
        for(col=row-1; col>=1; col--)
        {
            cout<< col << " " ;
        }
        cout<<endl;
    }
     for(row=n-1; row>=1; row--)
    {
        for(col=n-1; col>=row; col--)
        {
            cout<< "  ";
        }
        for(col=1; col<=row; col++)
        {
            cout<< col << " ";
        }
        for(col=row-1; col>=1; col--)
        {
            cout<< col << " " ;
        }
        cout<<endl;
    }




    getch();
}





#include<iostream>
#include <conio.h>
using namespace std;

int main()
{
    int n,urow, row, col;
    cout<< "Enter a number to get X type pattern: ";
    cin>> n;



    for(row=1; row<=n; row++)
    {
        for(col=1; col<=n; col++)
        {
            if(row==col || row +col== n+1 )
            {
                cout<< "* ";
            }
            else
            {
                cout<< "  ";
            }
        }
        cout<< "|"<< endl;
    }






    getch();
}


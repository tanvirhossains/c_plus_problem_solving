#include<iostream>
#include<conio.h>
using namespace std;
int main()
{

    int row, col,n;
    cout<< "give a number : ";
    cin>> n;


    for(row=1; row<=n; row++)
    {
        for(col=1; col<=n; col++)
        {
            cout<< row;
        }
        cout<< endl;
    }
    /**
    give a number : 5
    11111
    22222
    33333
    44444
    55555

    */

    getch();
}

#include <iostream>
#include<conio.h>
using namespace std;
int main()
{

    int n, col, row, result;
    cout<< "enter a number to see pyramid type pattern : ";
    cin>>n;

    for(row=1; row<=n; row++)
    {
        for(col=1; col<=n-row; col++)
        {
            cout<< " ";
        }
        for(col=1; col<=row*2-1; col++)
        {
            cout<< row ;
        }
        cout<< endl;
    }

    for(row=n-1; row>=1; row--)
    {
        for(col=1; col<=n-row; col++)
        {
            cout<< " ";
        }

        for(col=1; col<=row*2-1; col++)
        {
            cout<< row;
        }
        cout<< endl;
    }


    /**output:
        1
       222
      33333
     4444444
    555555555
     4444444
      33333
       222
        1


    */



    getch();
}

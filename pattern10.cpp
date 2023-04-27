#include<iostream>
#include <conio.h>
using namespace std;

int main()
{

    int n, row, col;
    cout<< "Enter a number to get pyramid pattern: ";
    cin>> n;


    for(row=1; row<=n; row++)
    {
        for(col=1; col<=n-row; col++)
        {
            cout<< " ";
        }
        for(col=1; col<=row; col++)
        {
            cout<<"*" << " ";
        }
        cout<< endl;
    }


    // option 1
    for(row=n-1; row>=1; row--)
    {
        for(col=1; col<=n-row; col++)
        {
            cout<< " ";
        }
        for(col=1; col<=row; col++)
        {
            cout<<"*" << " ";
        }
        cout<< endl;
    }

    /** option 2

    for(row=1; row<=n-1; row++)
     {

         for(col=1 ; col<=row; col++)
         {
             cout<< " ";
         }
         for(col =1 ; col<=n-row; col++)
         {

             cout<<((char)(col+64)) << " " ;
         }
         cout<< endl;
     }

    */

    /** output :


 Pyramid


    */


    getch();
}

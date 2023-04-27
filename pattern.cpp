5#include <iostream>
#include<conio.h>
using namespace std;
int main()
{

    int n, row, col;
    cout<< "enter a number to see pattern : ";
    cin>> n;

    for(row = 1; row<=n; row++)
    {

        for(col=1; col<=row; col++)
        {

            // change will here only
           cout<< ((char) (row+96)) << " " ; // (row +64) for capital character



        }

        cout<<  "\n";
    }

    /**
    output 1: cout << col << ","';'
    1
    1 2
    1 2 3
    out 2;  cout << row << ","';'
    1
    2 2
    3 3 3

    output 3:  cout << col%2 << ","';'
    1
    1 0
    1 0 1

    out put 4 :  cout << row%2 << ","';'
    1
    0 0
    1 1 1
    0 0 0 0

    output 5:   cout<< ((char) (row+96)) << " " ; // (row +64) for capital character
    a
    b b
    c c c
    d d d d
    e e e e e
    f f f f f f

    output 6;  cout<< "*" << " " ;
    *
    * *
    * * *
    * * * *

    */



    getch();
}

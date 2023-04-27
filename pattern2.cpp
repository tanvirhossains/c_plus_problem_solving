#include<iostream>
#include<conio.h>
using namespace std;
int main()
{

    int n, col, row;
    cout << "enter a number : ";
    cin>> n; //5

       for( row = n; row>=1; row--)
    {
        for(col=1; col<=row; col++)
        {
            cout<< ((char) (row+96)) << " ";
        }
        cout<< endl;
    }


    /**
    output 1 :  cout<< row << " ";
    5 5 5 5 5
    4 4 4 4
    3 3 3
    2 2
    1

    output 3 :cout<< ((char) (row+96)) << " "; // row+64

    f f f f f f
    e e e e e
    d d d d
    c c c
    b b
    a


    */

    getch();

}

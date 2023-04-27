#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    // initializing 2D array and getting output
    int row, col ;
    int a[2][4] ;

    cout<< "give number for 2D array : ";
    for(row =0; row<2; row++)
    {
        for(col=0; col<4; col++)
        {
            cout<<"a["<< row << "][" << col<< "] =";
                cin>> a[row][col];
        }
    }

    for(row =0; row<2; row++)
    {
        for(col=0; col<4; col++)
        {
            cout<<  a[row][col] << " ";
        }
        cout<< endl;
    }



    getch();
}



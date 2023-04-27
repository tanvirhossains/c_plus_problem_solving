#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    // initializing 2D array and getting output
    int row, col ;
    int a[2][4] ={
            {10,30,29},
            { 25,15,35,45}
                    };
    /**
    a[0][0] =19;
    a[0][1] =20;
    a[0][2] =38;
    a[0][3] =44;

    a[1][0] =15;
    a[1][1] =30;
    a[1][2] =39;
    a[1][3] =45;
    */

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


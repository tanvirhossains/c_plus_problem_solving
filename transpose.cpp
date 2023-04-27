#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    // matrix to transpose
    int numOfRow, numOfCol,row,n, col, matrix[10][10], transpose[10][10];
    cout<< "Give row and column number:";
    cin>>numOfRow>>numOfCol;

    //inputing matrix from user
    for(row=0; row<numOfRow; row++)
    {
        for(col=0; col<numOfCol; col++)
        {
            cout<< "\n matrix [" << row << "][" << col << "] =";
            cin>> matrix[row][col];
        }
    }

    // Printing matrix
    cout<< "\n matrix Number = \n";
    for(row=0; row< numOfRow; row++)
    {
        for(col=-0; col<numOfCol; col++)
        {
            cout<< matrix[row][col] << " ";
        }
        cout<< endl;
    }

    // transposing matrix
    for(row =0; row<numOfRow; row++)
    {
        for(col=0; col<numOfCol; col++)
        {
            transpose[col][row] = matrix[row][col];
        }
    }

    // transposing matrix
    cout<< "\n Transpose number = \n";
    for(row =0; row<numOfCol; row++)
    {

        for(col=0; col<numOfRow; col++)
        {

            cout<< transpose[row][col] << " ";
        }
        cout<< endl;
    }



    getch();
}

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{

    //sum of upper and lower triangle of diagonal
    int numForRowCol, row, col,sum =0 ;

    cout<< "Give a number for row and column number : ";
    cin>> numForRowCol;

    int matrix[10][10] ;
    for(row=0; row<numForRowCol ; row++)
    {
        for(col=0; col<numForRowCol; col++)
        {
            cout<< "matrix["<< row<< "]["<< col<< "] = ";
            cin>> matrix[row][col];
        }
        cout<< endl;
    }

    // printing of martix number
    cout<< "matrix number : \n";
    for(row=0; row<numForRowCol; row++)
    {
        for(col=0; col<numForRowCol; col++)
        {
            cout<< matrix[row][col] << " " ;
        }
        cout<< endl;
    }



    // printing of martix number
    cout<< "diogonal number : \n";
    for(row=0; row<numForRowCol; row++)
    {
        for(col=0; col<numForRowCol; col++)
        {

         if(col>row){
                  cout<< matrix[row][col] << " + " ;
                  sum= sum + matrix[row][col];
            }
        }
    }
    cout<< "=" << sum;



// printing of martix number
    int um =0;
    cout<< "diogonal number from right : \n";
    for(row=0; row<numForRowCol; row++)
    {
        for(col=0; col<numForRowCol; col++)
        {

            if (col<row)
            {
                cout<< matrix[row][col] << " + " ;
                um= um + matrix[row][col];
            }
        }
    }
    cout<< "=" << um;

    getch();


}


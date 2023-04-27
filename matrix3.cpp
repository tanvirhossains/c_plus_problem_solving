#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    // MUltiplication of two matrix
    int first[10][10], second[10][10],result[10][10], r1, r2, c1, c2, col,row, m, sum=0;

    cout<< "Enter row and column for first matrix : ";
    cin>> r1>> c1;
    cout<< "Enter row and column for second matrix : ";
    cin>> r2>> c2;

    while(c1!=r2)
    {
        cout<< "Error !! column of first matrix not equal to row of second ";
        cout<< "Enter row and column for first matrix : ";
        cin>> r1>> c1;
        cout<< "Enter row and column for second matrix : ";
        cin>> r2>> c2;
    }

    //taking input for first matrix
    cout<< "first matrix input of user: ";
    for(row=0; row<r1; row++)
        for(col=0; col<c1; col++)
        {
            cout<< "\n first["<< row<< "]["<< col<< "]";
            cin>>first[row][col];
        }

    //taking input for second matrix
    cout<< "Second matrix input of user : ";
    for(row=0; row<r2; row++)
    {
        for(col=0; col<c2; col++)
        {
            cout<< "\n second["<< row<< "]["<< col<< "]";
            cin>>second[row][col];
        }
    }


    // Multiplying matrix a and b and storing in array mult.

    for(row = 0; row< r1; row++)
        for(col= 0; col< c2; col++)
        {
            for(m = 0; m< c1; m++) //didn't understand this line
            {
                //sum= first[0][0]* second[0][0]+ first[0][1]*second[1][0] // this line wrote down in shortcut in the next line . here first row and second col value not changing that is why we took next line row and col
                sum =sum+ first[row][m] * second[m][col];
            }
            result[row][col] =sum;
            sum=0;
        }


    //output of first matrix
    cout<< "first Matrix:" <<endl;
    for(row=0; row<r1; row++)
    {
        for(col=0; col<c1; col++)
        {
            cout<< " "<< first[row][col];
        }
        cout<< endl;
    }

    cout<< "second Matrix:" <<endl;
    //output of second matrix
    for(row=0; row<r2; row++)
    {
        for(col=0; col<c2; col++)
        {
            cout<< " "<< second[row][col];
        }
        cout<< endl;
    }

    // multiplication of matrix of box

    cout<< "result of the multiplication : "<< endl;
    for(row=0; row<r1; row++)
    {
        for(col=0; col<c2; col++)
        {
        cout<< " "<< result[row][col];
        }
        cout<<endl;
    }


    getch();
}


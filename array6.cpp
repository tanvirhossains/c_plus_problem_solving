#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int  a[10][10], b[10][10], numOfRow=0, numOfCol=0,sum=0, subtract;

    cout<<"give your number of column and row: ";
    cin>> numOfRow >> numOfCol;

    //getting input of a and b
    for(int row =0 ; row<=numOfRow; row++)
    {
        for(int col=0; col<=numOfCol; col++)
        {
            cout<< "\n r["<< row<< "]["<< col<< "] =" ;
            cin>>a[row][col];
        }
    }
    // --------------------------output of a
    cout<< "a =";
    for(int row=0; row<=numOfRow ; row++)
    {
        for(int col=0; col<=numOfCol; col++)
        {
            //sum = sum+10;
            //cout<< "\n r["<< row<< "]["<< col<< "] =" ;
            cout<< a[row][col] << " ";
        }
        cout<< endl;
    }

    // --------------------------output of b-------------
    for(int row =0 ; row<=numOfRow; row++)
    {
        for(int col=0; col<=numOfCol; col++)
        {
            cout<< "\n r["<< row<< "]["<< col<< "] =" ;
            cin>>b[row][col];
        }
    }
    cout<< "b =";
    for(int row=0; row<=numOfRow ; row++)
    {
        for(int col=0; col<=numOfCol; col++)
        {
            //sum = sum+10;
            //cout<< "\n r["<< row<< "]["<< col<< "] =" ;
            cout<< b[row][col] << " ";
        }
        cout<< endl;
    }

    cout<< "a-b =";

        for(int x=0; x<=numOfRow; x++)
    {

        for(int c=0; c<=numOfCol; c++)
        {
            sum = a[x][c] * b[x][c];
            cout<< sum << " ";

        }
        cout<< endl;
    }




    getch();
}

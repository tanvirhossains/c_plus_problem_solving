#include<iostream>
#include<conio.h>
using namespace std;
int main()
{

    int n, col, row ;
    cout << "enter a number : ";
    cin>> n; //5

    for (row =n; row >= 1; row--)
    {
        for(col =1; col <= n-row; col++)
        {
            cout<< " ";
        }
        for(col =1; col<= row; col++)
        {
            cout<< col%2;
        }
        cout<< endl;
    }




    getch();
}


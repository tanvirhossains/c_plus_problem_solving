
#include<iostream>
#include <conio.h>
using namespace std;

int main()
{
    int n,num=0, row, col;
    cout<< "Enter a number to get X type pattern: ";
    cin>> n;

    for(row=1; row<=n; row++)
    {
        for(col=1; col<=row; col++){
            cout<< ++num << " " ;
        }
        cout<<endl;
    }




    getch();
}




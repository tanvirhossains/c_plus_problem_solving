
#include<iostream>
#include <conio.h>
using namespace std;

int main()
{
    int n,num=0, row, col;
    cout<< "Enter a number of row for pattern: ";
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





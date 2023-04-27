#include<iostream>
#include<conio.h>
using namespace std;

int main()
{


    int n, col, row;
    cout<< "Enter a number : ";
    cin>> n;


    for(row=1; row<=n; row++){

        for(col=1; col<= n-row; col++){
            cout<< " "<< " ";
        }
        for(col=1; col<=row; col++){
            cout<< col<< " " ;
        }
        cout<< endl;
    }

    for(row=1; row<=n-1; row++){

        for(col=1; col<=row; col++){
            cout<< " " << " ";
        }
        for(col=1; col<=n-row; col++ ){
            cout<< col << " ";
        }
        cout<< endl;
    }



    /**
    output:
    ___1
    __12
    _123
    1234
    _123
    __12
    ___1
    */


    getch();
}

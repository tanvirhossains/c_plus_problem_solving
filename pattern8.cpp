#include<iostream>
#include<conio.h>
using namespace std;
int main()
{

    int row, col,n;
    cout<< "give a number : ";
    cin>> n;

   for(row=1; row<=n; row+=1){

        for(col=1; col<=row; col++){
            cout<< col*row << " ";
        }
        cout<< endl;

   }


    /**output
    give a number : 5
    1
    2 4
    3 6 9
    4 8 12 16
    5 10 15 20 25


    */

    getch();
}


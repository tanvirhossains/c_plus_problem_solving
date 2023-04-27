4#include<iostream>
#include <conio.h>
using namespace std;
int main()
{


    int n, col, row, space;
    cout << "enter a number : ";
    cin>> n; //5



    for (row =1; row<= n; row++)
    {

        for(col =1; col<= n-row; col++)
        {
            cout<< " ";
        }

        for(col =1; col<= row; col++)
        {
            cout<< col;
        }


        cout<< endl;
    }




    /**
        output:   cout<< col;

            1
           12
          123
         1234
        12345

    */




    getch();
}


#include <iostream>
#include<conio.h>
using namespace std;
int main()
{

    /** //----------------- 1*2*3*.......*n
    int   n, multiple = 1;
    cout << "give n NUmber : ";
    cin>> n;

    for(int i =1; i<=n; i=i+2 ){
            multiple= multiple*(i*i);


    }
    cout<< multiple;
    */


    /** // -------------1^2*2^2*3^2*4^2.......^n
        int   n, multiple = 1;
        cout << "give n NUmber : ";
        cin>> n;

        for(int i =1; i<=n; i=i+1){
                multiple= multiple*i;


        }
        cout<< power;
        */


    /**
        // 1-2+3-4+5-6.......*n
        // 1+3+5....*n  -(2+4+6)
        int   n, sum = 0,odd=0, even=0;
        cout << "give n Number : ";
        cin>> n;

        for(int i =1; i<=n; i=i+1)
        {
            //sum= sum+ (i-(i+1));// easiest way to solve this problem

            if(i%2==0)
            {
                even= even+i;
            }
            else
                odd = odd+i;

        }
        cout<< " \n odd :" << odd;
        cout<< "\neven:"<<even;
        sum = odd-even;
        cout<< sum;
    */





    getch();

}

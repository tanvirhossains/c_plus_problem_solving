#include<iostream>
#include<conio.h>
using namespace std;

int main (){



    int   n,fibo,num=0,  first =0, second=1, i;
    cout << "give n Number : ";
    cin>> n;


    while(num <n)// if ouot
    {
        if(num<=1)
        {
            fibo= num;

        }
        else
        {

            fibo = first +second;
            first = second;
            second = fibo;



        }
        cout<<  fibo << ",";
        num++;

    }

getch();

}

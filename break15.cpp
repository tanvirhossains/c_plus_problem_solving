#include<iostream>
#include<conio.h>
using namespace std;


int main()
{

   /* for(int i =1; i<=100; i+=2)
    {

        if(i >=10)
        {
            if(i==5)
            {
                continue; // that means 5 don't show
            }
            break;
        }
        if(i==5)
        {
            continue; // that means 5 don't show the work of continue is don't go to next but it will return to up
        }
        cout<<i<<endl;*/

        for(int i=1; i<=100; i= i+3){
            if(i==10){
                continue;
            }
            if(i>13){
                break;
            }
            cout<< i<< endl;
        }
    //}


    getch();
}


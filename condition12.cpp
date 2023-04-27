#include<iostream>
#include<conio.h>
using namespace std;
int main()

{
    int num;
    cout<<"input a number:";
    cin>> num;

    if(num<0) //both will work
        cout<< "Negative";


   else if(num>0)
        cout<< "Positive";



    if(num==0){
        cout<< "Zero";
    }

    cout<< "not out";// it also will show

    getch();
}

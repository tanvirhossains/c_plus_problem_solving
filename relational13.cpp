#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int num1;
    cout<<"give a integer number:";
    cin>> num1;

    if(num1<0){ //way of getting absolute number
        cout<<(-num1); //(-num1) = if the number become negative then it convert to positive and absolute number

    }else{
    cout<< num1;
    }
    getch();
}

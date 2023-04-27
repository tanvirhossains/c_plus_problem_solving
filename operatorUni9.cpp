#include<iostream>
#include<conio.h>

using namespace std;

int main()
{    //Unary operator

    int x = 4;
    int y = x--;
    cout<<"Y: "<< y << endl; //y =4

    y = --x;
    cout<< y << endl; //y =4

    cout<<  x<<endl;//x-3

    getch();
}

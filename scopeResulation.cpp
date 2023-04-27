#include <iostream>
#include<conio.h>

using namespace std;

int  x = 20;// Global varaible
int outside()
{
    cout<< "\nthe value outside function: "<< x;
}

int main ()
{

    outside();
    int x = 10;// local variable
    :: x= 30;
    cout<< "\nthe value in main  function: "<< :: x;// if we use :: then variable assign to global variable and :: use already assign ":: " then show that value;
    getch();
}

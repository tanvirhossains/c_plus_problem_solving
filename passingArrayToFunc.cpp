#include<iostream>
#include<cstdlib>
#include<stdlib.h>
#include<conio.h>
using namespace std;

// array passing to function

void arrayFunction(int);

void arrayFunction(int num[])
{

    for(int i = 0; i<=4; i++)
    {
        cout<< num[i] << " ";
    }
}

int main()
{
    int arrayOfNum[5] = {10,13,30,40,50};
    arrayFunction(arrayOfNum);

    getch();
}





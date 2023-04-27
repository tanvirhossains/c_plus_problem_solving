#include<iostream>
#include<conio.h>
using namespace std;

// multiple function // prototype function // return function
// it is called prototype of function. i call any function before that function then use these line.

void addition(int, int);  // int if i take int value
float divition(float, float);
void reminder(int, int);


int main( )
{

    addition(23,24);
    addition(20,89);

    // returning a value from function c++=54
    float divid = divition(17, 5);
    cout<< "\n division = " << divid;

    getch();
}
// function of addition of two int number
void addition (int a, int b)
{
    int sum = a +b;
    cout<< "\n sum="<< sum ;
}


void reminder (int x, int y)
{
    //int x, y;
    int reminder = x%y;
    cout<< "\n reminder = " << reminder;
}

float divition(float x, float y) //int for returning value;
{
    //int x, y;
    float division =  x/y ;
    return division;
    //cout<< "\n division = " << division;
}






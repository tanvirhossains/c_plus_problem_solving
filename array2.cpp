
#include<iostream>
#include <conio.h>
using namespace std;

int main()
{
    // getting value by user
    int i, marks[12];

    for(i=0; i<=12; i++){

        cout<< "marks for student "<< i << "=";
        cin>> marks[i];
    }
    cout<< "\nMarks of the students : ";
    for(i=0; i<=12; i++)
    {
        cout<< marks[i]<< " " ;
    }

    getch();
}






#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    /****
    // getting fibonacci using array method
    int array1[6]= {12,15,47,6,27,28}, array2[5];

    cout<< "Array 1 =" ;
    for(int i=0; i<6; i++)
    {
        cout<< array1[i] << " ";
    }

    cout<< "\nArray 2 =";
    // all element copy from array1 to array2
    for(int a =0; a<6; a++)
    {
        array2[a]= array1[a];
    }
    for (int b=0; b<6; b++)
    {
        cout<< array2[b] << " ";
    }

    /** // giving number in reverse way (tried own)
    for (int a=5; a>=1; a--)
    {
        array2[a]=array1[a];
        cout<< array2[a] << " ";
    }*/


//------------------------------------------------------------2nd option
    //give number from user to transfer array1 value to another arrar2
    int n, array1[30], array2[30];

    cout<< "\n how many mumber do want to take : ";
    cin>> n;
    cout<< "\n give number for array : ";
    for(int num=0; num<n; num++)
    {
        cin>> array1[num];
    }

    cout<< "\n Array 1 =" ;
    for(int i=0; i<n; i++)
    {
        cout<< array1[i] << " ";
    }

    // all element copy from array1 to array2
    cout<< "\n Array 2 =";

    for(int a =0; a<n; a++)
    {
        array2[a]= array1[a];
        cout<< array2[a] << " ";
    }





    getch();
}


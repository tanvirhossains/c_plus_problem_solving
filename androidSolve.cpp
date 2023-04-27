#include<iostream>
#include<conio.h>

using namespace std;

int main()
{

    int n;
    cout<< "give a n  number =";
    cin>> n;
int num =0;
int sum =0;
    for(int i=1; i<n; i++)
    {

        for(int a = 1; a<=i; a++)
        {
            num = 8;

            sum = num + sum;
            cout<< num;
        }
        num = num +num;
        cout<< endl;
    };
    cout<< "\nsum of sum :" << sum;


};

#include <iostream>
#include<conio.h>
using namespace std;
int main()
{

    int num, fact, rem, temp, sum=0;
    cout << "check strong number :";
    cin>> num;

    temp =num;
    while (temp  !=0)
    {
        rem = temp %10;

        fact=1;
        for(int i =1; i<=rem; i++)
        {
            fact = fact*i;
        }

        sum = fact +sum;
        temp = temp/10;

    }

    if(sum == num)
    {
        cout<< "strong number";
    }
    else
    {
        cout<< "not a strong number";
    }
    //  cout<< "fact"<< fact ;


    getch();
}

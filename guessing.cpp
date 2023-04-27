#include<iostream>
#include<cstdlib>
#include<conio.h>
using namespace std;

int main()
{


    while(1)
    {
        int n;
        cout<< "Give a number form 1 to 5 =";
        cin>> n;


        int randomNum = rand()%5;

        if(randomNum == n)
        {
            cout<< "Congratulations!!! your guessing matched.";

        }
        else
        {
            cout<< "\n your number not match!!!!";
            cout<< "\n please try again ";
            cout<< "\nrandom number was: " << randomNum ;
            //   return n;
            //   cout<< "Do you want to play again?? write (y/n)"
        }

    }

getch();
}

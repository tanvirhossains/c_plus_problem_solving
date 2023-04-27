
#include <iostream>
#include<conio.h>

using namespace std;

int main()
{
    while(1)
    {
        // ==== exception handling =========
        try
        {
            int num1, num2;
            cout << "enter first number : " ;
            cin >> num1 ;
            cout << endl<< "enter second number :" ;
            cin >> num2;

            if(num1 ==0 || num2 ==0)
            {
                throw 0; // any value can be throw
            }
            double result = (double) num1 / num2;
            cout<< "Result : " << result ;
            break; //
        }
        catch(int x) // catch(...) // also work and considered for any kind of data type
        {
            cout<< "please give a valid number";
        }
    }
}



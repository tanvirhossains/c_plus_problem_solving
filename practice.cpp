#include<iostream>
#include<conio.h>

using namespace std;
int main()
{
    /* // ---------------------------multiplication number
       int a ;
       cout<< "input a number for multiplication : ";
       cin>> a;
       for (int i= 1; i<=10; i++){

          cout << a << "X" <<i << "="<< (a*i) << endl;
       }*///---------------------------- end of multiplication number


    /*/ //--------------------factorial number
        int number, fact =1;
        cout<< "give a number to get factorial value :";
        cin>> number;

        cout << "factorial number is :";
        for(int i= 1; i <= number; i++)
        {
            cout << i ;
            fact = fact*i;

            //cout << fact<< "X" << fact  << "= " << (fact *fact);
            //cout << (i *i);
            // cout <<
            if(i == number)
            {
                continue;
            }
            cout << "x";
        }

        cout<< " = " << fact;
    *///---------------------------------------------------




    //----------------finding prime (moulik) number ------------
    /* //-------------finding the number weather prime or not --------------
    int num, prime = 0;
    cout << "give a number to find prime number ";
    cin>> num;


    for (int i = 2; i<num; i++)
    {
        if( (num % i == 0)  )
        {
            prime++;
            break;
        }
    }
    if(prime ==0)
    {
        cout<< num <<"is a prime number";
    }
    else
    {
        cout << num <<"is not a prime number";
    }
    *///----------------------------



  /*  //-------------- finding LCM and GCD number -0-------------------
    int num1, num2, n1,n2,     gcd, lcm, rem;

    cout<< "enter two number to get LCM and GCD : ";
    cin>> num1 >>num2;

    n1 = num1;
    n2 = num2;


    while (n2 != 0)
    {
        rem = n1%n2;
        n1 = n2;
        n2= rem;
        //rem = num1 %num2;
        //  num1 = num2;
        // num2 = rem;
    }
    // gcd  = num2;
    // lcm = (num1 * num2) /gcd;

    gcd = n2;
    lcm = (n1*n2)/gcd;




    cout << "GCD is =" <<gcd<<endl;
    cout << "LCM is = " << lcm;

*/
//


    /*

    cout << "\n\nWelcome to Studytonight :-)\n\n\n";
        cout << " =====  Program to find the GCD and LCM of two numbers ===== \n\n";

        //variable declaration
        int n1, n2, i;

        //variable declaration and initialization
        int gcd = 1, lcm = 1;

        //taking input from the command line (user)
        cout << " Enter the two numbers you want to find the GCD and LCM of : \n\n";
        cin >> n1 >> n2;

        //logic to calculate the GCD and LCM of the two numbers
        for ( i = 1; i < 1000; i++)
        {
            //i is the least value that perfectly divides both the numbers and hence the GCD
            if ((n1 % i == 0) && (n2 % i == 0))
            {
                gcd = i;
            }
        }

        lcm = (n1 * n2) / gcd;

        cout << " \n\nThe GCD of the two numbers : " << n1 << " and " << n2 << " is : " << gcd;
        cout << " \n\nThe LCM of the two numbers : " << n1 << " and " << n2 << " is : " << lcm << "\n\n";
        cout << "\n\n\n";

        return 0;

    */
    int a =5;
    int b = 9;
    cout<<(a ^ b )<< endl;
    cout<< (~a);


    char c;
 cout << "Enter a character: ";
 cin >> c;
 cout << "ASCII Value of " << c << " is " << int(c);
    getch();
}

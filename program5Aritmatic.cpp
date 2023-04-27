
#include<iostream> // this file called header file
#include<conio.h>
#include<iomanip> // if don't use then setw(34) & setprecision won't work
using namespace std;

int main()
{
cout << "Plase enter  2 number=" << endl;
    int num1, num2;
    //num1 = 17;
    //num2= 9;


    cin >> num1 >> num2; // to get input form user

    //.........formating operator
    cout<<showpoint ;
    cout << setprecision(4); //normally in total will see 6 character number before and after "." ex= 3434.00 but if give number then will show according number
    cout << fixed; // if i use it then setprecision will show after "."

    float sum = num1 + num2;
     cout  <<" the sum is =" << sum <<endl;

    float sub = num1 - num2;
     cout<<" the sumbtract is =" <<setw (25) << sub <<endl; // setw(34) will take place 34 character before following output

     cout<<noshowpoint; // after "." any number won't show ex = 34 not = 34.0000

    float divide = num1* num2;
    cout <<setw (25) <<" the division is =" << divide << endl;

    double multipicaiton =(float) num1 / num2; // type casting= converting any data type to another data type
    cout <<setw (25) <<" the multiplication=" << multipicaiton<<endl ;

    int reminder = num1 % num2;  // % = reminder (existing number after division)
     cout <<setw (25) <<" the reminder is =" << reminder;

         getch();
}

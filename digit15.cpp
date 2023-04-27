#include<iostream>
#include<conio.h>
using namespace std;
int main ()
{
    // switch  statement

    int digit;
    cout<< "give a digit :" ;
    cin >> digit;
    switch(digit)
    {
    case 0:
        cout << "zero";
        break;
    case 1:
        cout << "one";
        break;
    case 2:
        cout << "two";
        break;
    case 3:
        cout << "three";
        break;
    case 4:
        cout << "four";
        break;
    case 5:
        cout << "five";
        break;
    case 6:
        cout << "six";
        break;
    case 7:
        cout << "seven";
        break;
    case 8:
        cout << "eight ";
        break;
    case 9:
        cout << "nine";
        break;
    default :
        cout<< "not a digit";
    }
    cout << endl;

    //--------- getting vowel /consonent latter using switch statement
    char ch;
    cout<< "give a latter :";
    cin>>ch;
    ch = tolower(ch);
    switch(ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        cout<< ch << " is a vowel ";
        break;
    default :
        cout<< ch <<"is a consonant";
    }


    getch();
}

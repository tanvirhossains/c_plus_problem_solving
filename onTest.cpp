#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    /* //----------------------- sum of digit
        int sum= 0, num, temt, rem; //num for exam ple 345 // this code to get sum of digit

        cin>> num;
        temt = num ;

        while (temt != 0){
            rem = temt %10;
            sum = sum + rem;
            temt = temt/10; // here will give division of the number
        }
         cout<< "sum of digit :" << sum;
        *///--------------------------------------


    /* //---------------- finding reverse number ----------
        int sum= 0, num, temt, rem; //gettin reverse number Option-1

        cin>> num;
        temt = num ;

       // cout<< "reverse number : " ; // option 2
        while (temt != 0)
        {
            rem = temt %10;
            sum = (sum *10)+ rem; //if  this line use or not
            temt = temt/10; // here will give division of the number
          cout << rem; // option -2
        }
       // cout<< "reverse number : " <<sum ;
    */

    /*  //------------------Palindrome number -----------
      int sum= 0, num, temt, rem;

      cout << "give a number : ";
      cin>> num;// for example : 123
      temt = num ;

      while (temt != 0)
      {
          rem = temt %10;
          sum = (sum *10)+ rem; //if  this line use or not
          temt = temt/10; // here will give division of the number

      }
      cout<< "reverse number : " <<sum ;
      if(num == sum)
      {
          cout << "\n this is a palindrome number:" << sum;
      }else{
      cout << "\n not a palindrome number ";
      }

    */


//---------------test a Armstrong number -------------
// An Armstrong number is one whose sum of digits raised to the power three equals the number itself. some Armstongenumber example = 153, 370
    /*
    int intialNum, finalNum, sum , rem, num, temporary;

    cout<< "give a number for get Armstrong number ";
    cin >> num;

    temporary= num;
    while(temporary !=0){
        rem = temporary %10;
        sum = sum +rem*rem*rem;
        temporary = temporary /10;
    }

    if(sum == num){
        cout<< "armstrong  "<< sum;
    }else{
        cout << " not armstrong  = X";
    }

    */





    /* //---------------counting Armstrong number -------------
      int initialNum, finalNum, sum=0, rem, num, temporary, totalArm=0;

      cout<< "initial NUmber : ";
      cin >> initialNum;
      cout << "final number : ";
      cin>> finalNum;

      cout << "\n armstrong : ";

      for(int i =initialNum; i<=finalNum; i++ )
      {
          temporary = i;
          while(temporary !=0)
          {
              rem = temporary %10;
              sum = sum +rem*rem*rem;
              temporary = temporary /10;
          }

          if(sum == i)
          {
              totalArm++;
              cout<< i <<",";
          }
          sum=0;

      }
      cout<< "\n total Armstorng number :" <<totalArm;

    *///-------------------------------------


//-----------counting digit number of number -----------------

    int num,countNum=0, reminder;

    cout<< "give a number : ";
    cin>> num;

    while (num != 0)
    {
//        reminder = num% 10;

        num= num/10;
        countNum++;
    }
    cout<< "total digit : " << countNum;





    getch();
}

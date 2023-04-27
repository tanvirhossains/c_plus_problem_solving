#include<iostream>
#include<conio.h>
using namespace std;
int main()
{

    int aray[]= {12, 16, 28, 92, 53, 15, 19};
    int value, position = -1;


    cout<< "\n give a number :" ;
    cin>>value;

    for(int i=0; i<8; i++)
    {
        if(value == aray[i])
        {
            position = i+1;
            cout<< "\nposition :"<< position;
            cout<< "\nnumber:" << aray[i];
            break;
        }
        /***one way
         else if(position == aray[i]){
             cout<< "Not found the number !!!!";
             break;
         }
         */
    }
    if(position == -1){
        cout<< "the number is not found!!!!!";
    }




}

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{   /// Getting students number, sum, average, maximum, minimum number;
    int stdNum ;

    cout<< "give student Number : ";
    cin>> stdNum;

    int marks[stdNum], sum = 0, maxNum, minNum;
    cout << "total students :" << stdNum;

    for(int i=0; i<stdNum; i++)
    {
        cout<< "give student marks  "<< i+1 << "=";
        cin>> marks[i];
        sum= sum+ marks[i];
    }

    cout << "\n Total number of students : " << sum;
    float average =(float) sum / stdNum;
    cout << "\n Average of the student number :  "<<average;

    maxNum = marks[0];
    minNum = marks[0];

    for(int x =1; x<stdNum; x++){
        marks[x];
        if(maxNum < marks[x]){
          maxNum = marks[x];
        }
        if(minNum > marks[x]){
          minNum = marks[x];
        }
    }
    cout<< "\n maximum number : "<< maxNum;
    cout<< "\n minimum number :"<< minNum;



    getch();
}

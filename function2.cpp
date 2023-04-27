#include<iostream>
#include<conio.h>
using namespace std;

//default Parameter function
int defaulParameter(int , int);

int defaulParameter(int a=12, int b=33){

    cout<< "\n a ="<< a;
    cout<< "\n b="<< b;

}


int withoutParameter(int n){

//int num = 5*4;
int num = n*n;
cout<< "\n num = " << num;
}
int main(){

withoutParameter(5);
defaulParameter();// if i give value then value will give sequentially .
getch();
}

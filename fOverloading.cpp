#include<iostream>
#include<cstdlib>
//#include<stdlib.h>
#include<conio.h>
using namespace std;

// making function of overloading

void sum(int , int);
void sum(int , int, int);
void sum (double,double);

int main(){

sum(30, 50);
sum(30.38, 40.45);
sum (10,20,30);
getch();
}


void sum(int a, int b){

int sum = a+b;
cout << " \nsum of 2 variable:" << sum;

}

void sum(int a, int b, int c ){

int sum = a+b+c;
cout<< "\nsum of 3 variable:" << sum;

}
void sum(double a, double b){

double sum = (double)a+b;
cout<< "\n sum of 2 double data : "<< sum;
}

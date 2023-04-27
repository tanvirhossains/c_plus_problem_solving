#include<iostream>
#include<conio.h>
using namespace std;


class Student
{

public:
    int id;
    double gpa;

    void display()
    {
        cout<< id << "   " << gpa << endl;
    }

    Student(int x, double y){
        id = x;
        gpa = y;

    };

};

int main()
{

    Student tanvir (101, 3.45 );
    tanvir.display();


    Student hossain(112, 4.34);
    hossain.display();

    getch();

}




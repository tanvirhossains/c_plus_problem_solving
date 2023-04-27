#include<iostream>
#include<conio.h>

using namespace std;

// default constructor example
class student
{

public:
    int id;
    double gpa;

    void display()
    {
        cout<< id << "  "<< gpa << endl;
    }


    student(int x, double y)
    {
        id= x;
        gpa= y;
    }

    // constructor overloading
    student()
    {
        cout<< "default constructor " << endl;
    }

};

int main ()
{
    student ob;

    student tanvir(101, 4.54);
    tanvir.display();

    student hossain (102, 4.88);
    hossain.display();
}

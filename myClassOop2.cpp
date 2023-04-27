#include<iostream>
#include<conio.h>

using namespace std;

// Adding parameterized function to the class c++ 68
class student
{

public:
    int id;
    double gpa;

    void display()
    {
        cout<< id << "  " << gpa << endl;

    };

    void  setValue (int x, double y)
    {
        id = x;
        gpa = y;
    };
};

int main()
{
    student alim, tanvir;
    alim.setValue(111, 3.34);
    alim.display();

    tanvir.setValue(112, 3.44);
    tanvir.display();

getch();
}


#include<iostream>
#include<conio.h>

using namespace std;

// introduction to basic Object Oriented Programming (c++ 66)
class student
{
public:
    int id;
    double gpa;

    //adding function to the class (c++ 67)
    void display()
    {
        cout<< id << "  " << gpa << endl;
    }
};


int main()
{
    student alim, tanvir;

    alim.id =  102;
    alim.gpa = 4.44;
    //cout<< alim.id << "  "<< alim.gpa << endl;
    alim.display();

    tanvir.id = 199;
    tanvir.gpa = 4.99;
    //cout<< tanvir.id << "  "<< tanvir.gpa<< endl;
    tanvir.display();

    getch();
}

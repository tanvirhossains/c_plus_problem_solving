#include<iostream>
#include<conio.h>

using namespace std;

class student  // this class is supper class
{
public:
    virtual  void display()
    {
        cout<< "I am a student" << endl;
    }
};
class person : public student
{
public:
    void display()
    {
        cout<< "I am a person" << endl;
    }
};
class teacher : public student
{
public:
    void display()
    {
        cout<< "I am a teacher" << endl;
    }
};
int main()
{
    student *s; // only supper class can make pointer
    teacher t;
    person p;

    s = &t;
    s -> display();

    s = &p;
    s ->display();
}


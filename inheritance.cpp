#include <iostream>
#include<conio.h>

using namespace std;

class person
{
public :
    string name;
    int age;
    int roll;
    void display ()
    {
        cout<< "name : " << name << endl;
        cout<< "roll : " << roll<< endl;
        cout<< "age : " << age << endl;
    }
};

class student : public person
{
public :
    int id;
    void display2 ()
    {
        display();
        cout<<"id : " << id<< endl;
    }

};

int main()
{
    student object ;
    object.name = "abdullah ";
    object.roll = 45;
    object.age = 23;
    object.id = 12930;

    object.display2();
    getch();
}


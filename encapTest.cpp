#include <iostream>
#include<conio.h>

using namespace std;

// using encapsulation
class student
{
private : // for protect the date
    string name;
public:
    void setName(string x)
    {
        name =x;
    }
    string getName()
    {
        return name;
    }
};

int main()
{
    student object;
    object.setName("tanvir");

    cout << object.getName() << endl;
    getch();
}

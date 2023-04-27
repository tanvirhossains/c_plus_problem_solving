#include <iostream>
#include<conio.h>

using namespace std;

// this keyword
// this keyword use for indicate specifically when class and local variable take same data type name
class student
{
public :
    string name;
    student (string name)
    {
     this ->  name =name;  // -> for indicate which name will show
    }
    void display ()
    {
        cout<< name << endl;
    }
};
int main()
{
    student object ("tanvir bro ");

   object.display();
    getch();
}

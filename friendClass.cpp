#include <iostream>
#include<conio.h>

using namespace std;

// friend class , i didn't understand this
class A
{
private :
    int id = 101;
    string name = "tanvir";

public :
    friend class B;

};

class B
{
public :
    void display(A ob)
    {
        cout<< ob.id << endl;
        cout<< ob.name << endl;
    }
};
int main(){

A ob;
B ob2;

ob2.display(ob);

}



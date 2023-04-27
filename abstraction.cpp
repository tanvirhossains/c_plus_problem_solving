#include<iostream>
#include<conio.h>

using namespace std;


class MobileUser // <- in which class use pure virtual function called abstract class.
{
public :
    virtual void sendMassage() = 0; // pure virtual function
    void call()
    {
        cout << "call ()" << endl;
    }
};

class rahim : public MobileUser //
{
public:
    void sendMassage() // if we inhirant abstract function then we must use pure virtual function
    {
        cout<< "I am Rahim " << endl;
    }

};
class karim : public MobileUser
{
public:
    void sendMassage()
    {
        cout<< "I am karim " << endl;
    }

};

int main()
{
    //MobileUser object; // -> abstract function can't take object
    MobileUser *object; // -> abstract function can take pointer

    object ->call();
    karim k;
    rahim r;

    object = &k;
    object -> sendMassage();
    object = &r;
    object -> sendMassage();


}


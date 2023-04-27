#include<iostream>

using namespace std;

// constructor initializer
// it is needed when any const variable have to declare other ways constructor can be used
class student
{
public:
    const int admissionFee;
    const int examFee;
    int fee;

    student (int x, int y, int a) : admissionFee(x), examFee(y)
    {
        // admissionFee = x; // in the constructor initializer no need to write this types of line

        fee = a;
        cout<< "constructor initializer :" <<admissionFee << endl;
        cout<< "constructor initializer :" << examFee << endl;
        cout<< "constructor : "<< fee << endl;
    }
};
int main()
{
    student ok (5123, 600, 1000);

}

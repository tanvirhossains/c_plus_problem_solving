#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
  // ---------------for loop
    for(int i =1; i<=10; i++)
    {

        cout << "Bangladesh" << i<< endl;
    }
    cout << "end of for loop" << endl;

 /// --------- while loop
    cout << "start while loop";
    int i = 1;
    while(i<=10)
    {
        cout << "name " << i << endl;
        i++;

    }
    cout<< "while loop finish \n ";


    // ---------do while loop
    cout << "do while loop start \n";
    int io = 8;
    do
    {
        cout << io << "  do or die" << "\n";
        io--;
    }
    while (io > 0);

    getch();
}

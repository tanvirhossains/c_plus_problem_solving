#include<iostream>
#include<conio.h>
using namespace std;

int main()
{

// pointer pointing to different variable
    int a=12,b=34, c=34;

    int *pnt;
    pnt =&a;


    cout<< "\t \n a =" << *pnt;
    pnt =&b;
    cout<< "\t\n b =" << *pnt;
    pnt =&c;
    cout<< "\t\n c =" << *pnt;

    // swiping two variable value

    int x=12, y=34, *v1, *v2, temporary ;

    v1= &x;
    v2 =&y;

    temporary = *v1;
    *v1 = *v2;
    *v2 = temporary;

    cout<< "\n x =" << x;
    cout<< "\n y=" << y;






    getch();
}

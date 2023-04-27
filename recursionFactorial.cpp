#include<iostream>
#include<cstdlib>
//#include<stdlib.h>
#include<conio.h>
using namespace std;

// Factorial using recursion

int fact(int n)
{
    if(n==1)
        return 1;
    else
        return n* fact(n-1);

}
int main()
{
    int recursion = fact(5);
    cout<< recursion;

    int a=5, facto = 1;
    for(int i=1; i<a; i++)
    {
        facto = facto *i;
        cout<< "\n fact="<< facto;
    }

    getch();
}





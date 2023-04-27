#include<iostream>
//#include <stdlib.h> // for generate random number
#include<cstdlib> //
#include<conio.h>
using namespace std;

// generating random number
int main(){

for(int i =0; i<=5; i++){

    int randomNumber = rand()&507 +1;  // &____ = until this number random number will generate
cout<< "\n Random number :"<< randomNumber;

}

getch();
}


// copy from internet
/** #include <cstdlib>
#include <iostream>
using namespace std;

const int ITERATIONS = 1e7;

int main() {
    double sum = 0;

    for (int i = 0; i < ITERATIONS; i++)
        sum += rand() % 1000000;

    cout << "Average value: " << sum / ITERATIONS << '\n';
}
*/

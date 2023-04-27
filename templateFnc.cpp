#include<iostream>
#include<conio.h>

using namespace std;

//c++ 92,92
// same and different data type
// template  function:  calculate one function to calculate multiple functions. it save time and no need to write multiple function to calculate.
// ==================== same data type
template <class  T>
T myNum(T a, T b)
{
    return a +b;
}

//=========================== different data type
template <class num1, class num2>
num1 add(num1 x, num2 y) //
{
    return x +y;
}
int main(){

int result1 =myNum<int>(4,5);
cout<< "same data type result1 : " << result1 <<endl;
cout<< "same data type result2 : " << myNum(4,8) <<endl;
cout<< "same data type  result3 : " << myNum(49.4,8.9) <<endl;

cout<< "different data type output 1 : " <<add<double  , int>(5.6,45) << endl;
cout<< "different data type output 1 : " <<add(5.6,40) << endl;


}


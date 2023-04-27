#include <iostream>
#include <conio.h>
#include<cstring> // this line for use the string function

using namespace std;

int main()
{
    // c++ 77 here == introduction to string
    char massage[9] = {'a', 'k', 'k', 'j', 'l', '\0' };
    char str_array[] = {'S', 'c', 'a', 'l', 'e', 'r', '\0'};
    char name []= "tani hossain";

    cout << " char str_arry : " << str_array << endl;
    cout << " char massage : " << massage << endl;
    cout << " char name : " << name << endl;


    // --------------------------------------
    // String function              (c++ = 78)

    char name1 [30] = " tanvir";
    int length = strlen(name1);
    cout<<"length of string :"<< length << endl;


    char copyName [9];
    strcpy(copyName, name1); // strcpy(where_i_want_value, copy_of_valur);
    cout<<"Copy of string :"<< copyName << endl;


    char concatString[] =  " Hossain";
    strcat( concatString, name1 ); // strcat(first_string, second_string) output: first_string
    cout<< "Concat (add) of two string : " <<  concatString << endl;


    char lowerName []= "TANVIR";
    strlwr(lowerName);
    cout<< "Lower case string : "<< lowerName << endl;


    char upperName []= "tavnir";
    strupr(upperName);
    cout<< "Uppar case string : "<<upperName << endl ;


    char compare_string1  []= "tanvir";
    char compare_string  []= "tanvir";
    int value = stricmp(compare_string1, compare_string);

    if(value == 0)
    {
        cout<< "String are equal : " << endl ;
    }
    else
    {
        cout<< "String are not equal : " <<endl ;
    }


    //------------------------------------
    //------------string class ----c++ 79 -----------
    //------------------------------------


    string str1 = " tanvir is";
    string str2 = " hossain";
    string str3;

    str3 = str1;
    cout<< "str3 : " << str3 << endl;

    str3 = str1 + str2;
    cout<< "str1 + str2 : " << str3 <<endl;

    int len = str3.size();
    cout<< " will show current length of the string ++++ : " << len << endl;

    str3.resize(6); // will show first 6 characters
    cout<< "string resize : " << str3  << endl;

    cout<< "it show whole length of string : " << str3.capacity()  << endl;
    cout<< "it also length 2  of string : " << str3.length()  << endl;



    int  leng = str3.size();
    cout<< "length of the string >>>>> : " << leng << endl;

    str3.shrink_to_fit();
    cout<< "show shrink  to fit : " << str3.capacity() << endl;
    str1.rend();
    cout<< "string rebegin : " << str1 << endl;
    return 0;
}

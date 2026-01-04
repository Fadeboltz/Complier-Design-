#include<iostream>
#include "header.h"
using namespace std;

void reg2() 
{
    cout << "---------------------------------------" << endl;

    cout << "This is the regular expression for (a+b)*" << endl;

    cout << "---------------------------------------" << endl;

    string z;
    cout << "Enter the string: ";
    cin >> z;

    if(z == "ab" || z == "abab" || z == "ababab" || z == "abababab" || z == "ababababab" || z == "a" || z == "b" || z == "aa" || z == "bb" || z == "aab" || z == "abb" || z == "baa" || z == "bba"   
       || z == "aaa" || z == "bbb" || z == "aabb" ) 
    {
        cout << "The string is accepted by the regular expression (a+b)*" << endl;
    } 
    else 
    {
        cout << "The string is not accepted by the regular expression (a+b)*" << endl;
    }

}


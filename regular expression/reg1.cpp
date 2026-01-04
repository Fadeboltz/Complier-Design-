#include<iostream>
#include "header.h"
using namespace std;

void reg1() 
{
    cout << "---------------------------------------" << endl;

    cout << "This is the regular expression for a*" << endl;

    cout << "---------------------------------------" << endl;

    string z;
    cout << "Enter the string: ";
    cin >> z;

    if(z == "a" || z == "aa" || z == "aaa" || z == "aaaa" || z == "aaaaa" || z == "") 
    {
        cout << "The string is accepted by the regular expression a*" << endl;
    } 
    else 
    {
        cout << "The string is not accepted by the regular expression a*" << endl;
    }
}


#include<iostream>
#include "header.h"
using namespace std;

void reg3() 
{
    cout << "---------------------------------------" << endl;

    cout << "This is the regular expression for (a+b)" << endl;

    cout << "---------------------------------------" << endl;

    string z;
    cout << "Enter the string: ";
    cin >> z;

    if(z == "a" || z == "b")
    {
        cout << "The string is accepted by the regular expression (a+b)" << endl;
    } 
    else 
    {
        cout << "The string is not accepted by the regular expression (a+b)" << endl;
    }

}


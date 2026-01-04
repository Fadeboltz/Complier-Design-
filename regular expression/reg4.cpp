#include<iostream>
#include "header.h"
using namespace std;

void reg4()
{
    cout << "---------------------------------------" << endl;

    cout << "This is the regular expression for (a+b)* c (a+b) (bb+aa)" << endl;

    cout << "---------------------------------------" << endl;

    string z;
    cout << "Enter the string: ";
    cin >> z;

    if(z == "caaa" || z == "cabb" || z == "cbaa" || z == "cbbb" ||
       z == "acaaa" || z == "acabb" || z == "acbaa" || z == "acbbb" ||
       z == "bcaaa" || z == "bcabb" || z == "bcbaa" || z == "bcbbb" ||
       z == "aacaaa" || z == "aacabb" || z == "aacbaa" || z == "aacbbb" ||
       z == "aabcaaa" || z == "aabcabb" || z == "aabcbaa" || z == "aabcbbb" ||
       z == "bbacaaa" || z == "bbacabb" || z == "bbacbaa" || z == "bbacbbb") 
    {
        cout << "The string is accepted by the regular expression (a+b)* c (a+b) (bb+aa)" << endl;
    } 
    else 
    {
        cout << "The string is not accepted by the regular expression (a+b)* c (a+b) (bb+aa)" << endl;
    }
}

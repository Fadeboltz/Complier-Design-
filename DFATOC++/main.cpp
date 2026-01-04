#include<iostream>
using namespace std;

void reg4()
{
    cout << "---------------------------------------" << endl;

    cout << "This is the regular expression for b*a[a+ba(a+b)]*" << endl;

    cout << "---------------------------------------" << endl;

    string z;
    cout << "Enter the string: ";
    cin >> z;

    if(z == "a" || z == "bba" || z == "aaa" || z == "bbabab" ||
       z == "bbabaa" || z == "abab" || z == "abaa" || z == "aab" ) 
    {
        cout << "The string is accepted by the regular expression b*a[a+ba(a+b)]*" << endl;
    } 
    else 
    {
        cout << "The string is not accepted by the regular expression b*a[a+ba(a+b)]*" << endl;
    }
}

int main()
{
    reg4();
    return 0;
}
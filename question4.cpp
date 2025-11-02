#include<iostream>
using namespace std;

//Q4
void identifiercheck()
{
    string c;
    cout << "Enter a string to check if it's an identifier:" << endl;
    getline(cin, c);
 
    if(!((c[0] >= 'A' && c[0] <= 'Z') || (c[0] >= 'a' && c[0] <= 'z') || c[0] == '_'))
    {
        cout << "Not a valid identifier." << endl;
        return;
    }
 
    for(int i = 1; i < c.length(); i++)
    {
        // valid chars: letters, digits, underscore
        if (!((c[i] >= 'A' && c[i] <= 'Z') ||
              (c[i] >= 'a' && c[i] <= 'z') ||
              (c[i] >= '0' && c[i] <= '9') ||
              c[i] == '_'))
        {
            cout << "Not a valid identifier." << endl;
            return;
        }
    }
 
    cout << "It is a valid identifier." << endl;
}
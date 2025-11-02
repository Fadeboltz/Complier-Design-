#include<iostream>
using namespace std;

//Q3
void CommentCheck()
{
    string c;
    cout << "Enter a line of code:" << endl;
    cin.ignore(); 
    getline(cin, c);
 
    if(c.length() >= 2)
    {
        if(c[0] == '/' && c[1] == '/')
        {
            cout << "This is a single-line comment." << endl;
            return;
        }
        else if(c[0] == '/' && c[1] == '*')
        {
            cout << "This is a multi-line comment start." << endl;
            return;
        }
    }
    if(c.length() >= 2 && c[c.length()-2] == '*' && c[c.length()-1] == '/')
    {
        cout << "This is a multi-line comment end." << endl;
        return;
    }
 
    cout << "This is not a comment." << endl;
}
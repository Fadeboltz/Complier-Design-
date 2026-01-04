#include<iostream>
#include "header.h"
using namespace std;

int main() 
{
    int choice;
    cout << "Select the regular expression to test:" << endl;
    cout << "1. a*" << endl;
    cout << "2. (a+b)*" << endl;
    cout << "3. (a+b)" << endl;
    cout << "4. (a+b)* c (a+b) (bb+aa)" << endl;
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    switch(choice) 
    {
        case 1:
            reg1();
            break;
        case 2:
            reg2();
            break;
        case 3:
            reg3();
            break;
        case 4:
            reg4();
            break;
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}
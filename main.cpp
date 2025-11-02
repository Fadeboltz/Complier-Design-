#include<iostream>
#include"headerfile.h"
using namespace std;

int main()
{
    int choice;

    cout << "Here is the start of all the lab tasks solutions:" << endl;
    cout << "-----------------------------------------------" << endl;
    cout << endl;
    cout << "Select which function you want to run:" << endl;
    cout << "1. ismatch()" << endl;
    cout << "2. opera()" << endl;
    cout << "3. checkComment()" << endl;
    cout << "4. identifiercheck()" << endl;
    cout << "5. arrayaverage()" << endl;
    cout << "6. maxmin()" << endl;
    cout << "7. concat()" << endl;
    cout << "Enter your choice (1–7): ";
    cin >> choice;

    cout << endl;

    switch (choice)
    {
    case 1:
        ismatch();
        break;
    case 2:
        Operator();
        break;
    case 3:
        CommentCheck();
        break;
    case 4:
        identifiercheck();
        break;
    case 5:
        arrayaverage();
        break;
    case 6:
        maxmin();
        break;
    case 7:
        concat();
        break;
    default:
        cout << "Invalid choice! Please run again and select 1–7." << endl;
    }
    return 0;
}
#include<iostream>
using namespace std;

//Q7
void concat()
{
    string str1, str2;
    cout<<"Enter first string:";
    cin>>str1;
    cout<<"Enter second string:";
    cin>>str2;

    string result = str1 + str2;
    cout<<"Concatenated string: "<<result<<endl;
}

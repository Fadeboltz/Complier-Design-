#include<iostream>
using namespace std;

//Q1
bool ismatch()
{
    cout<<"Enter a string to check if it's numeric:"<<endl;
    string c;
    cin>>c;

    for(int i = 0; i<c.length(); i++)
        {
            if(c[i]> 47 && c[i]<58)
                {
                    continue;
                }
            else
                {
                    cout<<"It is not numeric"<<endl;
                    return false;
                }
        }
         cout<<"It is numeric"<<endl;
         return true;
}
#include<iostream>
using namespace std;

//Q2
void Operator()
 {
     string a = "+-*/%=";

     string c;
     cout<<"Enter a mathmetical expression"<<endl;
     cin>>c;
     int flag = 0;


     for(int i = 0; i < c.length(); i++)
        {
            if(c[i]==a[0])
                {
                    cout<<"+ operator found"<<endl;
                    flag++;
                }
            else if(c[i]==a[1])
                {
                    cout<<"- operator found"<<endl;
                    flag++;
                }
            else if(c[i]==a[2])
                {
                    cout<<"* operator found"<<endl;
                    flag++;
                }
            else if(c[i]==a[3])
                {
                    cout<<"/ operator found"<<endl;
                    flag++;
                }
            else if(c[i]==a[4])
                {
                    cout<<"% operator found"<<endl;
                    flag++;
                }
            else if(c[i]==a[5])
                {
                    cout<<"= operator found"<<endl;
                    flag++;
                }
        }
        if(flag == 0)
            {
                cout<<"There was no arithmatic operator found in the expression.";
            }
 }
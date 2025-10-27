#include<iostream>
using namespace std;

//Q1
bool ismatch()
{
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

//Q2
void opera(string opp)
{
    char arr[]= {'+','-','*','/','%','='};

    int index = 1;

    for (int i = 0; i < opp.length() ; i++)
    {
        for(int j = 0; j < 6; j++)
        {
            if(opp[i] == arr[j])
            {
                cout<<"Operator "<< index << " : " << opp[i] <<endl;
                index++;
                break;
            }
        }
    }
}

//Q3
void checkComment(char str[]) 
{
    if (str[0] == '/' && str[1] == '/') 
    {
        cout << "It is a single-line comment." << endl;
    }
    else if (str[0] == '/' && str[1] == '*' ) 
    {
        int i = 2;
        while (str[i] != '\0')
         {
            if (str[i] == '*' && str[i + 1] == '/') 
            {
                cout << "It is a multi-line comment." << endl;
                return;
            }
            i++;
        }
        cout << "It is NOT a complete multi-line comment." << endl;
    }
    else 
    {
        cout << "It is NOT a comment." << endl;
    }
}

int main()
{
    ismatch();
    string opp;
    cout<<"Enter a string with operators: ";
    cin>>opp;
    opera(opp);
    char str[100];
    cout << "Enter a line: ";
    cin.getline(str, 100);
    checkComment(str);
    return 0;
}

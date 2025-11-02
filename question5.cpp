#include<iostream>
using namespace std;

//Q5
void arrayaverage()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    double avg = (double)sum / n;    
    cout << "Average: " << avg << endl;
}
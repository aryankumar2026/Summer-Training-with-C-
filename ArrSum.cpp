#include<iostream>
using namespace std;

int main()
{
    int n, a[100], sum = 0;

    cout<<"Enter size of array: ";
    cin>>n;

    cout<<"Enter elements: ";
    for(int i=0; i<n; i++)
        cin>>a[i];

    for(int i=0; i<n; i++)
        sum += a[i];

    cout<<"Sum = "<<sum;

    return 0;
}
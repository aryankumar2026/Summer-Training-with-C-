#include<iostream>
using namespace std;

int main()
{
    int n, a[100];

    cout<<"Enter size of array: ";
    cin>>n;

    cout<<"Enter elements: ";
    for(int i=0; i<n; i++)
        cin>>a[i];

    int min = a[0];

    for(int i=1; i<n; i++)
    {
        if(a[i] < min)
            min = a[i];
    }

    cout<<"Minimum Element = "<<min;

    return 0;
}
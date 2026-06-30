#include<iostream>
using namespace std;

int main()
{
    int a[100];
    int n, i;
    int *start, *end, temp;

    cout<<"Enter Number of Elements: ";
    cin>>n;

    cout<<"Enter Elements:"<<endl;

    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    start = a;
    end = a + n - 1;

    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

    cout<<"Reversed Array:"<<endl;

    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

    cout<<endl;

    return 0;
}
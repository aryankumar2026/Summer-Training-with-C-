#include<iostream>
using namespace std;

int main()
{
    int n;
    int a[100];
    int i;
    int max,min;
    int sum=0;
    float avg;
    int even=0,odd=0;

    cout<<"Enter Number of Elements: ";
    cin>>n;

    cout<<"Enter Elements:"<<endl;

    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    max=a[0];
    min=a[0];

    for(i=0;i<n;i++)
    {
        if(a[i]>max)
            max=a[i];

        if(a[i]<min)
            min=a[i];

        sum=sum+a[i];

        if(a[i]%2==0)
            even++;
        else
            odd++;
    }

    avg=sum/(float)n;

    cout<<"Maximum = "<<max <<endl;
    cout<<"Minimum = "<<min <<endl;
    cout<<"Sum = "    <<sum <<endl;
    cout<<"Average = "<<avg <<endl;
    cout<<"Even Numbers = "<<even <<endl;
    cout<<"Odd Numbers = " <<odd <<endl;

    return 0;
}
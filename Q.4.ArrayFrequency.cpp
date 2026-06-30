#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<int,int> m;

    int a[100];
    int n,i;

    cout<<"Enter Number of Elements: ";
    cin>>n;

    cout<<"Enter Elements:"<<endl;

    for(i=0;i<n;i++)
    {
        cin>>a[i];
        m[a[i]]++;
    }

    cout<<"Frequency:"<<endl;

    map<int,int>::iterator it;

    for(it=m.begin();it!=m.end();it++)
    {
        cout<<it->first<<" -> "<<it->second<<endl;
    }

    return 0;
}
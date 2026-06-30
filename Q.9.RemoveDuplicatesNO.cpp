#include<iostream>
#include<set>
using namespace std;

int main()
{
    set<int> s;
    set<int>::iterator it;

    int a[100];
    int n, i;

    cout<<"Enter Number of Elements: ";
    cin>>n;

    cout<<"Enter Elements:"<<endl;

    for(i=0;i<n;i++)
    {
        cin>>a[i];
        s.insert(a[i]);
    }

    cout<<"Unique Elements:"<<endl;

    for(it=s.begin();it!=s.end();it++)
    {
        cout<<*it<<" ";
    }

    cout<<endl;
    cout<<"Total Unique Elements = "<<s.size()<<endl;

    return 0;
}
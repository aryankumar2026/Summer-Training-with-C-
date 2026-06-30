#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter three numbers:"<< endl;
    cin>>a>>b>>c;
    if(a>b)
    {
        if(a>c)
        cout<<"largest number:"<<a<< endl;
        else
        cout<<"largest number:"<<c<< endl;
    }
    else
    { 
     if(b>c)
     cout<<"largest number:"<<b<< endl;
     else
     cout<<"largest number:"<<c<< endl;
    }
    return 0;
}
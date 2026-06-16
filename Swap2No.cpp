#include<iostream>
using namespace std;
int main()
{
    int a,b,temp;
    cout<<"enter two numbers:";
    cin>>a>>b;
    temp=a;
    a=b;
    b=temp;
    cout<<a<<" "<<b;
    return 0;
}
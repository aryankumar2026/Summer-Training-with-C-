#include<iostream>
using namespace std;
int main()
{
    int a,b,temp;
    cout<<"enter two numbers:"<< endl;
    cin>>a>>b;
    temp=a;
    a=b;
    b=temp;
    cout<<a<<" "<<b<< endl;
    return 0;
}
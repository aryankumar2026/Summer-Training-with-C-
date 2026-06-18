#include<iostream>
using namespace std;
int max(int a, int b)
{
    if(a>b)
        return a;
        else
        return b;
}
int main()
{
    int x,y;
    cout<<"Enter two numbers: ";
    cin>>x>>y;
    cout<<"Maximum: "<<max(x,y)<<endl;
    return 0;
}
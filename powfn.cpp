#include<iostream>
using namespace std;
long long power(int base, int exp)
{
    long long result=1;
    for(int i=1;i<=exp;i++)
    {
        result*=base;
    } 
    return result;    
}
int main()
{
    int base, exp;
    cout<<"Enter base and exponent: ";
    cin>>base>>exp;

    cout<<"Answer="<<power(base, exp)<<endl;
    return 0;
}
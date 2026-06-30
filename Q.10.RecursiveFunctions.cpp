#include<iostream>
using namespace std;

int factorial(int n)
{
    if(n==0 || n==1)
        return 1;
    else
        return n*factorial(n-1);
}

int sum(int n)
{
    if(n==1)
        return 1;
    else
        return n+sum(n-1);
}

int power(int a,int b)
{
    if(b==0)
        return 1;
    else
        return a*power(a,b-1);
}

int main()
{
    int n;
    int a,b;

    cout<<"Enter Number for Factorial: ";
    cin>>n;

    cout<<"Factorial = "<<factorial(n)<<endl;

    cout<<"Enter Number for Sum: ";
    cin>>n;

    cout<<"Sum = "<<sum(n)<<endl;

    cout<<"Enter Base and Power: ";
    cin>>a>>b;

    cout<<"Answer = "<<power(a,b)<<endl;

    return 0;
}
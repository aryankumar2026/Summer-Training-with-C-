#include<iostream>
using namespace std;
int main()
{
    float a,b;
    char op;
    cout<<"Enter first number:";
    cin>>a;
    cout<<"Enter operator (+,-,*,/):";
    cin>>op;
    cout<<"Enter second number:";
    cin>>b;
switch(op)
{
    case '+':
    cout<<"Result="<<a+b;
    break;
    case '-':
    cout<<"result="<<a-b;
    break;
    case '*':
    cout<<"Result="<<a*b;
    break;
    case '/':
    if(b!=0)
    cout<<"result="<<a/b;
    else
    cout<<"Division by Zero not possible";
    break;
    default:
    cout<<"invalid Operator";
}
return 0;
}
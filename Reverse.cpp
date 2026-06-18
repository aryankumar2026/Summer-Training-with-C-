#include<iostream>
using namespace std;
int main()
{
    int num, reverse=0,digit;
    cout<<"Enter a no:";
    cin>>num;

    while (num!=0)
    {
        digit=num%10;
        reverse=reverse*10+digit;
        num=num/10;
    }
    cout<<"Reversed no="<<reverse;
    return 0;
}
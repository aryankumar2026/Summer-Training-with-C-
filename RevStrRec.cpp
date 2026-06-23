#include<iostream>
using namespace std;

int ReverseString(string str, int i)
{
    if(i<0)
        return;
    cout<<str[i];
    ReverseString(str, i-1);
}

int main()
{
    string str;
    cout<<"Enter the string: "<<endl;
    getline(cin, str);

    cout<<"Reversed string: ";
    ReverseString(str, str.length()-1);

    return 0;
}
#include<iostream>
using namespace std;

int palindrome(string str, int s, int e)
{
    if(s>=e)
        return 1;
    if(str[s]!=str[e])
        return 0;
    return palindrome(str, s+1, e-1);
}

int main()
{
    string str;
    cout<<"Enter the string: "<<endl;
    getline(cin, str);

    if(palindrome(str, 0, str.length()-1))
        cout<<"The string is a palindrome."<<endl;
    else
        cout<<"The string is not a palindrome."<<endl;

    return 0;
}
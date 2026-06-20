#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str1, str2;

    cout<<"Enter first string: ";
    getline(cin, str1);

    cout<<"Enter second string: ";
    getline(cin, str2);

    if(str1.length() != str2.length())
    {
        cout<<"Not Anagram";
        return 0;
    }

    int count1[256] = {0};
    int count2[256] = {0};

    for(int i=0; i<str1.length(); i++)
    {
        count1[str1[i]]++;
        count2[str2[i]]++;
    }

    for(int i=0; i<256; i++)
    {
        if(count1[i] != count2[i])
        {
            cout<<"Not Anagram";
            return 0;
        }
    }

    cout<<"Anagram";

    return 0;
}
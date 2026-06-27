#include <iostream>
#include <map>
using namespace std;

int main()
{
    string s;
    map<char, int> m;

    cout << "Enter string: "<< endl;
    cin >> s;

    for(int i = 0; i < s.length(); i++)
    {
        m[s[i]]++;
    }

    for(int i = 0; i < s.length(); i++)
    {
        if(m[s[i]] == 1)
        {
            cout << "First Non-Repeating Character = " << s[i]<< endl;
            return 0;
        }
    }

    cout << "No Non-Repeating Character"<< endl;

    return 0;
}
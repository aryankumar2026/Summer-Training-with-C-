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

    cout << "Character Frequency:\n"<< endl;
    for(auto x : m)
    {
        cout << x.first << " = " << x.second << endl;
    }

    return 0;
}
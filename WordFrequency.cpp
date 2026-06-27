#include <iostream>
#include <map>
using namespace std;

int main()
{
    int n;
    string word;
    map<string, int> m;

    cout << "Enter number of words: "<< endl;
    cin >> n;

    cout << "Enter words:\n"<< endl;
    for(int i = 0; i < n; i++)
    {
        cin >> word;
        m[word]++;
    }

    cout << "Word Frequency:\n"<< endl;
    for(auto x : m)
    {
        cout << x.first << " = " << x.second << endl;
    }

    return 0;
}
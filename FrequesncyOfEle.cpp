#include <iostream>
#include <map>
using namespace std;

int main()
{
    int n, a[100];
    map<int, int> m;

    cout << "Enter size: "<< endl;
    cin >> n;

    cout << "Enter elements: "<< endl;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        m[a[i]]++;
    }

    cout << "Frequency of elements:\n"<< endl;
    for(auto x : m)
    {
        cout << x.first << " = " << x.second << endl;
    }

    return 0;
}
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

    int element = a[0], max = 0;

    for(auto x : m)
    {
        if(x.second > max)
        {
            max = x.second;
            element = x.first;
        }
    }

    cout << "Most Frequent Element = " << element<< endl;

    return 0;
}
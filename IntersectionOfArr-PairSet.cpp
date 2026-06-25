#include <iostream>
#include <set>
using namespace std;

int main()
{
    int n1, n2;
    int a[100], b[100];

    cout << "Enter size of first array: " << endl;
    cin >> n1;
    cout << "Enter first array elements: " << endl;
    for(int i = 0; i < n1; i++)
    {
        cin >> a[i];
    }

    cout << "Enter size of second array: " << endl;
    cin >> n2;
    cout << "Enter second array elements: " << endl;
    for(int i = 0; i < n2; i++)
    {
        cin >> b[i];
    }

    set<int> s1, inter;

    for(int i = 0; i < n1; i++)
    {
        s1.insert(a[i]);
    }

    for(int i = 0; i < n2; i++)
    {
        if(s1.count(b[i]))
        {
            inter.insert(b[i]);
        }
    }

    cout << "Intersection of arrays: " << endl;
    for(auto x : inter)
    {
        cout << x << " ";
    }

    return 0;
}
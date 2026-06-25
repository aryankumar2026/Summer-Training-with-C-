#include <iostream>
#include <set>
using namespace std;

int main()
{
    int n1, n2;
    int a[100], b[100];
    set<int> s;

    cout << "Enter size of first array: " << endl;
    cin >> n1;
    cout << "Enter first array elements: " << endl;
    for(int i = 0; i < n1; i++)
    {
        cin >> a[i];
        s.insert(a[i]);
    }

    cout << "Enter size of second array: " << endl;
    cin >> n2;
    cout << "Enter second array elements: " << endl;
    for(int i = 0; i < n2; i++)
    {
        cin >> b[i];
        s.insert(b[i]);
    }

    cout << "Union of arrays: " << endl;
    for(auto x : s)
    {
        cout << x << " ";
    }

    return 0;
}
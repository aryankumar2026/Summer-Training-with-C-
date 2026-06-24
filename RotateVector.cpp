#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, k;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> v(n);

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    cout << "Enter rotation count: ";
    cin >> k;

    k = k % n;

    for (int r = 1; r <= k; r++)
    {
        int last = v[n - 1];

        for (int i = n - 1; i > 0; i--)
        {
            v[i] = v[i - 1];
        }

        v[0] = last;
    }

    cout << "Vector after rotation: ";
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}
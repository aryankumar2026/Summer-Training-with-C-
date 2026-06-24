#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> v(n);

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int max = v[0];

    for (int i = 1; i < n; i++)
    {
        if (v[i] > max)
        {
            max = v[i];
        }
    }

    cout << "Maximum element = " << max;

    return 0;
}
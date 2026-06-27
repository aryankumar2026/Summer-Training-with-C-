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

    int q, x;

    cout << "Enter number of queries: "<< endl;
    cin >> q;

    while(q--)
    {
        cout << "Enter element: ";
        cin >> x;

        cout << "Frequency = " << m[x] << endl;
    }

    return 0;
}
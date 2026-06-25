#include <iostream>
#include <set>
using namespace std;

int main()
{
    int n;
    cout << "Enter size: "<< endl;
    cin >> n;

    int a[100];
    set<int> s;

    cout << "Enter elements: " << endl;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        s.insert(a[i]);
    }

    cout << "Number of distinct elements = " << s.size();

    return 0;
}
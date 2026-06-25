#include<iostream>
#include<set>
using namespace std;

int main()
{
    int n;
    cout << "Enter size of set: " << endl;
    cin >> n;

    int a[100];
    set<int> s;
    cout << "Enter elements: " << endl;
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        s.insert(a[i]);
    }
    cout << "Unique elements in the set: " << endl;
    for(auto it=s.begin(); it!=s.end(); it++)
    {
        cout << *it << " ";
    }
    return 0;
}
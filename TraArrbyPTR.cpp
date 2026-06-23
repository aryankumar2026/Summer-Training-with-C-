#include <iostream>
using namespace std;

int main()
{
    int n, a[100];
    int *p;

    cout << "Enter the size of array: " << endl;
    cin >> n;

    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    p = a; // Point to the first element of the array

    cout << "Array elements are: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << *(p + i) << " "; // Access array elements using pointer arithmetic
    }
    return 0;
}
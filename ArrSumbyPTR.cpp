#include <iostream>
using namespace std;

int main()
{
    int n, a[100], sum = 0;
    int *p;

    cout << "Enter the size of the array: ";
    cin >> n;

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
    cin >> a[i];

    p = a; // Point to the first element of the array

    for(int i = 0; i < n; i++)
    {
        sum = sum + *(p + i); // Access array elements using pointer arithmetic
    }
    cout << "Sum of Array = " << sum << endl;
    return 0;
}
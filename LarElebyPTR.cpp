#include <iostream>
using namespace std;

int main()
{
    int n, a[100];
    int *p;
    cout << "Enter size of array: ";
    cin >> n;

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    p = a; // Point to the first element of the array

    int largest = *p; // Initialize largest with the first element
    
    for (int i = 1; i < n; i++)
    {
        if(*(p + i) > largest) // Compare current element with largest
        {
            largest = *(p + i); // Update largest if current element is greater
        }
    }
    cout << "Largest element in the array is: " << largest << endl;
    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    int n, a[100];

    cout << "Enter the size of the array: " << endl;
    cin >> n;

    cout << "Enter the elements of the array: " << endl;
     for (int i = 0; i < n; i++)
         cin >> a[i];
       
     int *start = a; // Point to the first element of the array
     int *end = a + n - 1; // Point to the last element of the array
     
     while (start < end)
     {
        int temp = *start; // Store the value at start pointer
        *start = *end; // Assign the value at end pointer to start pointer
        *end = temp; // Assign the stored value to end pointer

        start++; // Move start pointer to the next element
        end--; // Move end pointer to the previous element
     }
     cout << "Reversed array is: " << endl;
     for (int i = 0; i < n; i++)
     cout << a[i] << " "; // Print the reversed array
     return 0;
}
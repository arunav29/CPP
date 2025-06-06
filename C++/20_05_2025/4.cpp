// Write a C++ Program to count the total even and odd numbers present in an array of size n.
#include <iostream>
using namespace std;
int main()
{
    int n, odd = 0, even = 0;
    cout << "Enter the size of the array:-";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array:-";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    cout << "Total Number of even number in array is " << even << " and odd number is " << odd;
    return 0;
}
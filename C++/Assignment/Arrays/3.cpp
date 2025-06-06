// 3.	Write a function to check if an array is a palindrome.
#include <iostream>
using namespace std;
bool palindrome(int arr[], int size)
{
    int start = 0;
    int end = size - 1;

    while (start < end)
    {
        if (arr[start] != arr[end])
        {
            return false;
        }
        start++;
        end--;
    }
    return true;
}
int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[100];
    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    if (palindrome(arr, n))
    {
        cout << "The array is a palindrome.\n";
    }
    else
    {
        cout << "The array is NOT a palindrome.\n";
    }

    return 0;
}
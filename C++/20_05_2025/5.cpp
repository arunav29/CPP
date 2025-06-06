// Write a C++ program to reverse the order of elements stored in an array without storing in a
// different array.
#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter the size of the array";
    cin >> size;
    int arr[size];
    cout << "Enter the elements of the array";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int start = 0, end = size - 1;
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    cout << "The reverse array is:";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}
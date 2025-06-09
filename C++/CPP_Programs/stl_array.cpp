// Program to enonstrate STL Arrgs
#include <iostream>
#include <array>
#include <algorithm> // for sort

using namespace std;

int main()
{
    // Declare and initialize an array of 5 integers
    array<int, 5> arr = {10, 20, 5, 15, 25};

    // Access elements
    cout << "Elements in array: ";
    for (int i = 0; i < arr.size(); ++i)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";

    // Modify an element
    arr[2] = 50;
    cout << "After modification: ";
    for (int value : arr)
    {
        cout << value << " ";
    }
    cout << "\n";

    // Sorting the array
    sort(arr.begin(), arr.end());//iterators
    cout << "After sorting: ";
    for (auto val : arr)
    {
        cout << val << " ";
    }
    cout << "\n";

    // Accessing front and back
    cout << "Front element: " << arr.front() << "\n";
    cout << "Back element: " << arr.back() << "\n";

    return 0;
}

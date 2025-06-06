// 4.	Write a function “SumOfElements” that takes a pointer to an integer array and its size and returns the sum of its elements.
#include <iostream>
using namespace std;
#include <iostream>
using namespace std;

int SumOfElements(int *arr, int size)
{
    int sum = 0;
    for (int i = 0; i < size; ++i)
    {
        sum += *(arr + i);
    }
    return sum;
}

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int *arr = new int[n];

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    int total = SumOfElements(arr, n);
    cout << "Sum of elements = " << total << endl;

    delete[] arr;
    return 0;
}

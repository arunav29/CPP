// WAP to Find the average of 5 numbers using a pointer to an array.
#include <iostream>
using namespace std;
int average(int a[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += *(a + i);
    }
    return sum / size;
}
int main()
{
    int a[] = {23, 45, 55, 65, 33, 45};
    int size = sizeof(a) / sizeof(a[0]);
    int k = average(a, size);
    cout << "The average of the numbers is " << k << endl;
}
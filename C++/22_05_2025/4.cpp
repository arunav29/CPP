// 4. WAP to Find the maximum element in an array using pointers
#include <iostream>
using namespace std;
int max(int *a, int size)
{
    int k = *a;
    for (int i = 1; i < size; i++)
    {
        if (*(a + i) > k)
        {
            k = *(a + i);
        }
    }
    return k;
}
int main()
{
    int a[] = {23, 45, 55, 65, 33, 45};
    int size = sizeof(a) / sizeof(a[0]);
    int k = max(a, size);
    cout << "Maximum element= " << k;
}
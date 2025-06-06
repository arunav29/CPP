// WAP to Use pointer arithmetic to access the 3rd and 5th elements of an array.
#include <iostream>
using namespace std;
int main()
{
    int arr[10] = {1, 2, 3, 4, 65, 33, 98, 12, 34, 93};
    int *ptr = arr;
    cout << "3rd Element= " << *(ptr + 2) << endl;
    cout << "5th Element= " << *(ptr + 4);
}
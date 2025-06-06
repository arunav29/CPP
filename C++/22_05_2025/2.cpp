// 2. WAP to Swap Two Numbers Using Pointers
#include <iostream>
using namespace std;
swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Before Swapping : a = " << a << ", b = " << b << endl;
    swap(&a, &b);
    cout << "After Swapping : a = " << a << ", b = " << b << endl;
    return 0;
}

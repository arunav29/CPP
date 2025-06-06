// 3.	Write a function that swaps two pointers (not the values they point to).
#include <iostream>
using namespace std;

// Function to swap two pointers
void swapPointers(int **a, int **b)
{
    int *temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x = 10, y = 20;
    int *p1 = &x;
    int *p2 = &y;

    cout << "Before swapping:\n";
    cout << "*p1 = " << *p1 << ", *p2 = " << *p2 << endl;

    swapPointers(&p1, &p2);

    cout << "After swapping pointers:\n";
    cout << "*p1 = " << *p1 << ", *p2 = " << *p2 << endl;

    return 0;
}

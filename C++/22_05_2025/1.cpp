// 1. WAP to Declare a pointer and initialize it with the address of an integer variable. Print both
// the address and value
#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int *p = &a;
    cout << a << endl;
    cout << p << endl;
    return 0;
}
// Program to demonstrate function template of single type
#include <iostream>
using namespace std;

// Function template
template <typename T>
T findMax(T a, T b) {//t is assigned as int in first case
    return (a > b) ? a : b;
}

int main() {
    // Using template function with int
    int int1 = 10, int2 = 20;
    cout << "Max of " << int1 << " and " << int2 << " is " << findMax(int1, int2) << endl;

    // Using template function with double
    double d1 = 15.75, d2 = 9.34;
    cout << "Max of " << d1 << " and " << d2 << " is " << findMax(d1, d2) << endl;

    // Using template function with char
    char c1 = 'A', c2 = 'Z';
    cout << "Max of '" << c1 << "' and '" << c2 << "' is '" << findMax(c1, c2) << "'" << endl;

    return 0;
}

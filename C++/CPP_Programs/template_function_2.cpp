#include <iostream>
using namespace std;

// Function template with two types
template <typename T1, typename T2>
void displaySum(T1 a, T2 b) {
    cout << "Sum: " << (a + b) << endl;
}

int main() {
    displaySum(5, 10.5);       // int and double
    displaySum(2.5, 4);        // double and int
    displaySum(100L, 200);     // long and int

    return 0;
}

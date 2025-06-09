#include <iostream>
#include <array>
#include <functional> // for plus
#include <numeric>    // for accumulate

using namespace std;

int main() {
    // Declare and initialize a array
    array<int, 5> numbers = {10, 20, 30, 40, 50};

    // Use std::plus<int> with accumulate to find the sum
    //accumulate(start_iterator, end_iterator, initial_value, binary_operation)
    int result = accumulate(numbers.begin(), numbers.end(), 0, plus<int>()); //accumulate gives group and operation to be performed

    // Output the result
    cout << "Sum using plus functor: " << result << endl;

    return 0;
}

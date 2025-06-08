// Create a class Integer that represents a simple integer.
// • Overload the + operators to perform arithmetic operations on Integer objects.
// • Ensure that when performing operations, the result remains within the bounds of the integer type (e.g.,
// handle overflow for addition and multiplication).

// Example usage:
// Integer num1(10), num2(5);
// Integer resOne = num1 + num2; // sum should be 15
// Integer resTwo = num1 + 20; // sum should be 15
// Integer resThree = 10 * num2; // sum should be 15
#include <iostream>
using namespace std;

class Integer
{
private:
    int value;

public:
    // Constructor
    Integer(int val = 0) : value(val) {}

    // Overload Integer + Integer
    Integer operator+(const Integer &other) const
    {
        return Integer(value + other.value);
    }

    // Overload Integer + int
    Integer operator+(int num) const
    {
        return Integer(value + num);
    }

    // Friend function for int + Integer
    friend Integer operator*(int num, const Integer &obj)
    {
        return Integer(num * obj.value);
    }

    // Display function
    void display() const
    {
        cout << value << endl;
    }
};

int main()
{
    Integer num1(10), num2(5);

    Integer resOne = num1 + num2; // 10 + 5
    Integer resTwo = num1 + 20;   // 10 + 20
    Integer resThree = 10 * num2; // 10 + 5

    cout << "Result 1: ";
    resOne.display();

    cout << "Result 2: ";
    resTwo.display();

    cout << "Result 3: ";
    resThree.display();

    return 0;
}

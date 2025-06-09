// demonstration program for Class template with one type
#include <iostream>
using namespace std;

// Class template
template <typename T>
class Calculator {
private:
    T num1, num2;

public:
    Calculator(T a, T b) {
        num1 = a;
        num2 = b;
    }

    void displayResults() {
        cout << "Numbers: " << num1 << " and " << num2 << endl;
        cout << "Sum: " << num1 + num2 << endl;
        cout << "Difference: " << num1 - num2 << endl;
        cout << "Product: " << num1 * num2 << endl;
        if (num2 != 0)
            cout << "Quotient: " << num1 / num2 << endl;
        else
            cout << "Division by zero error!" << endl;
    }
};

int main() {
    Calculator<int> intCalc(10, 5);
    cout << "Integer Calculator:\n";
    intCalc.displayResults();

    Calculator<float> floatCalc(5.5f, 2.2f);
    cout << "\nFloat Calculator:\n";
    floatCalc.displayResults();

    return 0;
}

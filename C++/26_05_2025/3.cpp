// Write a C++ program to create a structure for complex number. Create function to add, subtract and multiply two complex numbers.
#include <iostream>
using namespace std;
struct complex
{
    double real;
    double imag;
};
complex add(complex a, complex b)
{
    complex result;
    result.real = a.real + b.real;
    result.imag = b.imag + a.imag;
    return result;
}
complex sub(complex a, complex b)
{
    complex result;
    result.real = a.real - b.real;
    result.imag = a.imag - b.imag;
    return result;
}
complex multiply(complex a, complex b)
{
    complex result;
    result.real = (a.real * b.real) - (a.imag * b.imag);
    result.imag = (a.real * b.imag) + (a.imag * b.real);
    return result;
}
void display(complex c)
{
    cout << c.real;
    if (c.imag >= 0)
    {
        cout << " + " << c.imag << "i";
    }
    else
    {
        cout << " - " << -c.imag << "i";
    }
}
int main()
{
    complex a, b, result;
    cout << "Enter the real and imaginary part of first number : ";
    cin >> a.real >> a.imag;
    cout << "Enter the real and imaginary part of second number : ";
    cin >> b.real >> b.imag;
    result = add(a, b);
    cout << "Sum= ";
    display(result);
    result = sub(a, b);
    cout << "\nSub= ";
    display(result);
    result = multiply(a, b);
    cout << "\nMultiplication= ";
    display(result);
    return 0;
}
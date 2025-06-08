// Write a C++ program to create a structure for complex number. Create function to add, subtract and multiply two complex numbers.
#include <iostream>
using namespace std;
struct Complex
{
    double real;
    double imag;
};
Complex add(Complex a, Complex b)
{
    Complex result;
    result.real = a.real + b.real;
    result.imag = b.imag + a.imag;
    return result;
}
Complex sub(Complex a, Complex b)
{
    Complex result;
    result.real = a.real - b.real;
    result.imag = a.imag - b.imag;
    return result;
}
Complex multiply(Complex a, Complex b)
{
    Complex result;
    result.real = (a.real * b.real) - (a.imag * b.imag);
    result.imag = (a.real * b.imag) + (a.imag * b.real);
    return result;
}
void display(Complex c)
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
    Complex a, b, result;
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
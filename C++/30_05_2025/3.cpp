// WAP to create a Class Complex to perform operations on Complex numbers. Implement constructor overloading for the class and implement operator overloading
//  to perform addition, subtraction and multiplication operations on complex numbers.
#include <iostream>
using namespace std;
class Complex
{
public:
    double real, img;
    Complex() : real(0), img(0) {}
    Complex(double r) : real(r), img(0) {}
    Complex(double r, double i) : real(r), img(i) {}
    Complex(const Complex &c)
    {
        real = c.real;
        img = c.img;
    }
    Complex operator+(const Complex &a) const
    {
        return Complex(real + a.real, img + a.img);
    }
    Complex operator-(const Complex &a) const
    {
        return Complex(real - a.real, img - a.img);
    }
    Complex operator*(const Complex &a) const
    {
        double r = real * a.real - img * a.img;
        double i = real * a.img + img * a.real;
        return Complex(r, i);
    }
    void display() const
    {
        cout << real;
        if (img >= 0)
            cout << " + " << img << "i";
        else
            cout << " - " << -img << "i";
    }
};
int main()
{
    Complex a, b;

    cout << "Enter the real and imaginary part of first number: ";
    cin >> a.real >> a.img;

    cout << "Enter the real and imaginary part of second number: ";
    cin >> b.real >> b.img;
    Complex sum = a + b;
    Complex diff = a - b;
    Complex mul = a * b;
    cout << "sum= ";
    sum.display();
    cout << "\nDifference= ";
    diff.display();
    cout << "\nMultiplication= ";
    mul.display();
    return 0;
}
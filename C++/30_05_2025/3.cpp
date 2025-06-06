// WAP to create a Class Complex to perform operations on Complex numbers. Implement constructor overloading for the class and implement operator overloading
//  to perform addition, subtraction and multiplication operations on complex numbers.
#include <iostream>
using namespace std;
class complex
{
public:
    double real, img;
    complex() : real(0), img(0) {}
    complex(double r) : real(r), img(0) {}
    complex(double r, double i) : real(r), img(i) {}
    complex(const complex &c)
    {
        real = c.real;
        img = c.img;
    }
    complex operator+(const complex &a) const
    {
        return complex(real + a.real, img + a.img);
    }
    complex operator-(const complex &a) const
    {
        return complex(real - a.real, img - a.img);
    }
    complex operator*(const complex &a) const
    {
        double r = real * a.real - img * a.img;
        double i = real * a.img + img * a.real;
        return complex(r, i);
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
    complex a, b;

    cout << "Enter the real and imaginary part of first number: ";
    cin >> a.real >> a.img;

    cout << "Enter the real and imaginary part of second number: ";
    cin >> b.real >> b.img;
    complex sum = a + b;
    complex diff = a - b;
    complex mul = a * b;
    cout << "sum= ";
    sum.display();
    cout << "\nDifference= ";
    diff.display();
    cout << "\nMultiplication= ";
    mul.display();
    return 0;
}
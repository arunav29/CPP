#include <iostream>
using namespace std;

class Complex
{
public:
    double real;
    double img;

    Complex() : real(0), img(0) {}
    Complex(double r) : real(r), img(0) {}
    Complex(double r, double i) : real(r), img(i) {}
    Complex(const Complex &c)
    {
        real = c.real;
        img = c.img;
    }

    Complex add(const Complex &a) const
    {
        return Complex(real + a.real, img + a.img);
    }

    Complex sub(const Complex &a) const
    {
        return Complex(real - a.real, img - a.img);
    }

    Complex multiply(const Complex &c) const
    {
        double r = real * c.real - img * c.img;
        double i = real * c.img + img * c.real;
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

    Complex sum = a.add(b);
    Complex diff = a.sub(b);
    Complex product = a.multiply(b);

    cout << "Sum = ";
    sum.display();
    cout << endl;

    cout << "Difference = ";
    diff.display();
    cout << endl;

    cout << "Multiplication = ";
    product.display();
    cout << endl;

    return 0;
}

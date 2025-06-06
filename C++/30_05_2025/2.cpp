#include <iostream>
using namespace std;

class complex
{
public:
    double real;
    double img;

    complex() : real(0), img(0) {}
    complex(double r) : real(r), img(0) {}
    complex(double r, double i) : real(r), img(i) {}
    complex(const complex &c) // Copy constructor with const
    {
        real = c.real;
        img = c.img;
    }

    complex add(const complex &a) const
    {
        return complex(real + a.real, img + a.img);
    }

    complex sub(const complex &a) const
    {
        return complex(real - a.real, img - a.img);
    }

    complex multiply(const complex &c) const
    {
        double r = real * c.real - img * c.img;
        double i = real * c.img + img * c.real;
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

    complex sum = a.add(b);
    complex diff = a.sub(b);
    complex product = a.multiply(b);

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

// Program to demonstrate use of Dynamic Memory Initialization with class
#include <iostream>

using namespace std;

class Complex{
private:
    int real;
    int imag;

public:
    Complex()
    {
        real = 0;
        imag = 0;
    }
    Complex(int real, int imag)
    {
        this->real = real;
        this->imag = imag;
    }
    void display()
    {
        cout << "Complex Number: " << real << " + " << imag << "i";
    }
};

int main(){

    Complex *c1 = new Complex();
    Complex *c2 = new Complex(5, 7);

    c1->display();
    c2->display();

    delete c1;
    delete c2;

    return 0;
}
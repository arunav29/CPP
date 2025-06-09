// program to demonstrate single inheritance
#include <iostream>

using namespace std;

class Base1
{
public:
    Base1()
    {
        cout << "\n Base1 Class Construtor Called!";
    }
    void display_base()
    {
        cout << "\n Base1 Class Display Function Called!";
    }
};

class Base2
{
public:
    Base2()
    {
        cout << "\n Base2 Class Construtor Called!";
    }
    void display_base()
    {
        cout << "\n Base2 Class Display Function Called!";
    }
};

class Derived : public Base1, public Base2
{
public:
    Derived()
    {
        cout << "\n Derived Class Construtor Called!";
    }
    void display()
    {
        cout << "\n Derived Class Display Function Called!";
    }
};

int main()
{
    Derived dobj;
    //call to derived class display function
    dobj.display();
    //call to base1 display function
    dobj.Base1::display_base();
    //call to base2 display function
    dobj.Base2::display_base();
    return 0;
}
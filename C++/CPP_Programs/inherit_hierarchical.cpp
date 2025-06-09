// program to demonstrate single inheritance
#include <iostream>

using namespace std;

class Base
{
public:
    Base()
    {
        cout << "\n Base Class Construtor Called!";
    }
    void display_base()
    {
        cout << "\n Base Class Display Function Called!";
    }
};

class Derived1 : public Base
{
public:
    Derived1()
    {
        cout << "\n Derived1 Class Construtor Called!";
    }
    void display_derived()
    {
        cout << "\n Derived1 Class Display Function Called!";
    }
};

class Derived2 : public Base
{
public:
    Derived2()
    {
        cout << "\n Derived2 Class Construtor Called!";
    }
    void display_derived()
    {
        cout << "\n Derived2 Class Display Function Called!";
    }
};


int main()
{
    Derived1 d1obj;
    //calls derived class 1 display function
    d1obj.display_derived();

    Derived2 d2obj;
    //calls derived class 2 display function
    d2obj.display_derived();

    return 0;
}
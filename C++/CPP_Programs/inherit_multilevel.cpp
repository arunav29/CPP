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

class Intermediate : public Base
{
public:
    Intermediate()
    {
        cout << "\n Intermediate Class Construtor Called!";
    }
    void display_intermediate()
    {
        cout << "\n Intermediate Class Display Function Called!";
    }
};

class Derived : public Intermediate
{
public:
    Derived()
    {
        cout << "\n Derived Class Construtor Called!";
    }
    void display_derived()
    {
        cout << "\n Derived Class Display Function Called!";
    }
};

int main()
{
    Derived dobj;
    //calls derived class display function
    dobj.display_derived();
    //calls Intermediate class display function
    dobj.display_intermediate();
    //calls Base class display function made available through intermediate class
    dobj.display_base();
    return 0;
}
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

class Intermediate1 : virtual public Base
//class Intermediate1 : public Base
{
public:
    Intermediate1()
    {
        cout << "\n Intermediate1 Class Construtor Called!";
    }
    void display_intermediate1()
    {
        cout << "\n Intermediate1 Class Display Function Called!";
    }
};

class Intermediate2 : virtual public Base
//class Intermediate2 : public Base
{
public:
    Intermediate2()
    {
        cout << "\n Intermediate2 Class Construtor Called!";
    }
    void display_intermediate2()
    {
        cout << "\n Intermediate2 Class Display Function Called!";
    }
};

class Derived : public Intermediate1, public Intermediate2
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
    //creates ambiguity problem
    dobj.display_base(); 

    //solution to ambiguity problem: refering with class name and scope resolution operator
    //dobj.Base::display_base();
    return 0;
   
}



    
// program to demonstrate single inheritance
#include <iostream>

using namespace std;

class Base
{
public:
    Base()
    {
        cout<<"\n Base Class Construtor Called!";
    }
    virtual void display()
    //void display()
    {
        cout << "\n Base Class Display Function Called!";
    }
};

class Derived: public Base{
public:
Derived(){
    cout<<"\n Derived Class Construtor Called!";
}
void display(){
    cout<<"\n Derived Class Display Function Called!";
}
};

int main(){
    Base bobj;
    Derived dobj;
    Base *boptr = NULL;
    Derived *doptr = NULL;
    
    //Derived object pointer pointing to derived class
    // doptr=&dobj;
    // doptr->display();

    //Derived class object pointing to base class is not possible
    //doptr=&bobj;

    //Base object pointer pointing to base class
    // cout<<"\n Base class Object pointer pointing to Base Class Object -->";
    // boptr = &bobj;
    // boptr->display();
    
    // cout<<"\n Base class Object pointer pointing to Derived Class Object -->";
    // //Base object pointer pointing to derived class
    // boptr = &dobj;
    // boptr->display();    

    return 0;
}
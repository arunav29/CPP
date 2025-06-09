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
    //display_base();
}
};

int main(){
    Base bobj;
    Derived dobj;

    // bobj.display();
    // dobj.display();
    // dobj.display();

    Base *boptr = NULL;
    Derived *doptr = NULL;
    
    boptr = &bobj;
    doptr = &dobj;

    boptr->display();
    //doptr->display();
    //doptr->display();

    boptr = &dobj;
    boptr->display();


    return 0;
}
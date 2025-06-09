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
    void display_base()
    {
        cout << "\n Base Class Display Function Called!";
    }
};

class Derived: private Base{
public:
Derived(){
    cout<<"\n Derived Class Construtor Called!";
}
void display(){
    cout<<"\n Derived Class Display Function Called!";
    display_base();
}
};

int main(){
    Derived dobj;
    //To call Derived Class display function
    dobj.display();
    //To call derived class display function with derived class object
    //dobj.display_base();
    return 0;
}
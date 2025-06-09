// program to demonstrate friend function
// 1. fuction as friend to a class

#include <iostream>

using namespace std;

class Cls
{
private:
    int x;

public:
    Cls();
    void display();
    friend void friend_func(Cls&);
};

Cls ::Cls()
{
    cout << "\n Cls Construtor Called!";
    x = 0;
}

void Cls ::display()
{
    cout << "\n Cls Display Function Called!";
    cout << "\n x = " << x;
}

void friend_func(Cls& obj){
    cout << "\n Friend Function Called!";
    obj.x = 10;
    //x=5;//Cls& obj = cobj;
}


int main()
{
    Cls cobj;
    // To call Derived Class display function
    cobj.display();
    // To call derived class display function with derived class object
    friend_func(cobj);
    cobj.display();
    return 0;
}
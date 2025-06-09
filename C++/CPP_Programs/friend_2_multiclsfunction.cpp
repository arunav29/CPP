// program to demonstrate friend function
// 2. fuction as friend to multiple classes

#include <iostream>

using namespace std;

class Cls2;

class Cls1
{
private:
    int x;

public:
    Cls1();
    void display();
    friend void friend_func(Cls1 &, Cls2 &);
};

class Cls2
{
private:
    int x;

public:
    Cls2();
    void display();
    friend void friend_func(Cls1 &, Cls2 &);
};

Cls1 ::Cls1()
{
    cout << "\n Cls1 Construtor Called!";
    x = 0;
}

void Cls1 ::display()
{
    cout << "\n Cls1 Display Function Called!";
    cout << "\n x = " << x;
}

Cls2 ::Cls2()
{
    cout << "\n Cls2 Construtor Called!";
    x = 0;
}

void Cls2 ::display()
{
    cout << "\n Cls2 Display Function Called!";
    cout << "\n x = " << x;
}

void friend_func(Cls1 &obj1, Cls2 &obj2)
{
    cout << "\n Friend Function Called!";
    cout << "\n Class1::x = " << obj1.x;
    cout << "\n Class2::x = " << obj2.x;
}

int main()
{
    Cls1 c1obj;
    Cls2 c2obj;
    // To call Derived Class display function
    c1obj.display();
    c2obj.display();
    // To call derived class display function with derived class object
    friend_func(c1obj, c2obj);
    return 0;
}
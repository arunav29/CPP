// program to demonstrate friend function
// 3. class as friend to another class
// Cls2 is friend of Cls1

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
    friend Cls2;
};

class Cls2
{
private:
    int x;

public:
    Cls2();
    Cls2(Cls1 &);
    void display(Cls1 &);
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

Cls2 ::Cls2(Cls1 &c1obj)
{
    cout << "\n Cls2 Construtor as friend tro Class1 Called!";
    c1obj.x = 10;
}

void Cls2 ::display(Cls1 &c1obj)
{
    cout << "\n Cls2 Display Function Called!";
    cout << "\n Cls2::x = " << x;
    cout << "\n Cls2 Access Private Member of Cls1!";
    cout << "\n Cls1::x = " << c1obj.x;
}

int main()
{
    Cls1 c1obj;
    Cls2 c2obj(c1obj);
   
    c1obj.display();
    //Class2 display function as friend to Class1
    c2obj.display(c1obj);
    
    return 0;
}
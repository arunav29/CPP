#include<iostream>

using namespace std;

class Base{
    private:
    int x;
    public:
    Base(){
        x=0;
    }
    void square(){
        x = x*x;
    }
    void display(){
        cout<<"x="<<x;
    }
};

class Derived : public Base{
    private:
    int x;
    public:
    void display(){
        cout<<"Inheritance";
    }
};

int main(){
    Base b1;
    b1.display();
    Derived d1;
    d1.square();
    d1.display();
    Derived* doptr;
    doptr = &b1;
    doptr = &d1;

    return 0;
}
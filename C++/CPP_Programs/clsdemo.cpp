#include <iostream>
#define MAX_SIZE 5

using namespace std;

class Calculator
{
private:
    int num1;
    int num2;
    int res;

public:
    void getValue(){
        cout<<"\n Enter 1st number: ";
        cin>>num1;
        cout<<"\n Enter 2nd number: ";
        cin>>num2;
    }

    void display(){
        cout<<"\n num1 = "<<num1;
        cout<<"\n num2 = "<<num2;
        cout<<"\n res = "<<res;
    }

    void add();
    //void subtract();
    //void multiply();
    //void divide();
}c3;

Calculator c4;
int main()
{
    int const max = 5;
    Calculator calculator;// Calculator calculator = new Calculator();
    Calculator* calc_optr=&calculator;
    Calculator calcarrobj[max];
    for(int i=0; i<MAX_SIZE; i++){
        calcarrobj[i].add();
    }
    calc_optr->add();
    calculator.getValue();
    calculator.add();
    calculator.display();
    return 0;
}

void Calculator :: add(){
    res = num1 + num2;    
}
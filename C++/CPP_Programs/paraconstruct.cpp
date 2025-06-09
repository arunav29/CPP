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
    Calculator(){
        num1=0;
        num2=0;
        res=0;
    }
    Calculator(int m, int n, int r){
        num1 = m;
        num2=n;
        res = r;
    }
    Calculator(Calculator* obj){
        num1 = obj->num1;

    }

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
};
int main(){
    Calculator calc_default;
    Calculator calc_para(5,7,6);
    Calculator calc_copy(calc_default);

    return 0;
}
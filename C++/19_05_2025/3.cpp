// Write a program to swap two numbers without using temporary variable.
#include<iostream>
using namespace std;
int main(){
    int a , b;
    cout<<"Enter two numbers:-";
    cin>>a;
    cin>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"The two numbers after swap is "<<a<<","<< b;
}

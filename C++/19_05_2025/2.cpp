// Write a CPP Program to calculate simple interest. Take user input for Principal, rate and
// time.
#include<iostream>
using namespace std;
int main(){
    float p,r,t,s;
    cout<<"Enter the amount=";
    cin>>p;
    cout<<"Enter the rate(in %)=";
    cin>>r;
    cout<<"Enter the time=";
    cin>>t;
    s=(p*r*t)/100;
    cout<<"Simple interest="<<s;


    return 0;

}
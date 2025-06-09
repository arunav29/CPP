#include<iostream>

using namespace std;
int main(){
    int i;
    int *ip;

    i = 2;
    ip = &i;

    cout<<"\ni= "<< i;
    cout<<"\n&i= "<<&i;
    cout<<"\nip= "<<ip;
    cout<<"\n*ip= "<<*ip;
    cout<<"\n&ip= "<<&ip;

    // cout<<"\nip+1 = "<<ip+1;
    // cout<<"\n*ip+1= "<<*ip+1;
    // cout<<"\n*(ip+1)= "<<*(ip+1);

    // cout<<"\n*ip+1= "<<*ip++;
    // cout<<"\n++*ip= "<<++*ip;

    return 0;
}
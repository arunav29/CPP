#include<iostream>

using namespace std;

void func_counter(){
    static int counter;
    counter++;
    cout<<"Value of Counter"<<counter;
    
}
int main(){
    func_counter();
    func_counter();
    func_counter();

    return 0;
}
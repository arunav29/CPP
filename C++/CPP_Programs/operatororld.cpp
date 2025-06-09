#include<iostream>

using namespace std;

class Cls{
    private:
        int i;
    public:
        Cls(int p){
            i = p;
        }
        void display();
        void operator+(Cls o2){
            //int k=this->i+o2.i;
            cout<<"Addition";
        }
};

void Cls::display(){
    cout<<i<<endl;
}

int main(){
    Cls o1(5), o2(7);
    o1.display();
    o2.display();
    o1+o2;//o1.operator+(o2)
    return 0;
}
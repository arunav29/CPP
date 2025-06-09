#include<iostream>
#include <unistd.h>

using namespace std;

enum Menu { PUSH=1, POP, DISPLAY, EXIT};

int main(){
    
    Menu menu;
    int choice;

    while(1){

        cout<<"Menu-----";
        cout<<"\n1. PUSH";
        cout<<"\n2. POP";
        cout<<"\n3. DISPLAY";
        cout<<"\n4. EXIT";

        cout<<"\n Enter choice: ";
        cin>>choice;

        menu = (Menu)choice;

        switch (menu)
        {
        case PUSH:
            cout<<"\n Pushing to stack";
            /* code */
            break;
        case POP: 
            cout<<"\n Pop from stack";
            break;
        case DISPLAY:
            cout<<"\n Stack is displayed";
            break;
        case EXIT:
            cout<<"\n Exiting the Program";
            sleep(5);
            return 0;
        default:
            cout<<"\n Enter correct option";
            break;
        }
    }
    return 0;
}
#include<iostream>
using namespace std;

int main() {
    int choice, a, b;

    while(true) {
      
        cout << "1) Add two numbers\n";
        cout << "2) Subtract two numbers\n";
        cout << "3) Multiply two numbers\n";
        cout << "4) Divide two numbers\n";
        cout << "5) Exit\n";
        cout << "Enter a choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Enter two numbers: ";
                cin >> a >> b;
                cout << "The sum of two numbers: " << (a + b) << endl;
                break;

            case 2:
                cout << "Enter two numbers: ";
                cin >> a >> b;
                cout << "The difference of two numbers: " << (a - b) << endl;
                break;

            case 3:
                cout << "Enter two numbers: ";
                cin >> a >> b;
                cout << "The multiplication of two numbers: " << (a * b) << endl; 
                break;

            case 4:
                cout << "Enter two numbers: ";
                cin >> a >> b;
                if (b == 0) {
                    cout << "Error! Division by zero is not allowed.\n";
                } else {
                    cout << "The division of two numbers: " << (a / b) << endl;
                }
                break;

            case 5:
                cout << "Exiting the program.\n";
                return 0;  
            default:
                cout << "Invalid choice! Please enter a valid option.\n";
        }
    }

    return 0;  
}

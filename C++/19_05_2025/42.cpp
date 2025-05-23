#include <iostream>
using namespace std;

int main() {
     cout<<"Enter the number of row to print";
    int rows ;
    cin>>rows;
    
    for (int i = rows; i >= 1; i--) {
       
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl; 
    }

    return 0;
}

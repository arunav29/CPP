#include <iostream>
using namespace std;

int main() {
    cout<<"Enter the number of row to print";
    int rows ;
    cin>>rows;

   
    for (int i = 1; i <= rows; i++) {
       if(i==3)
       continue;
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
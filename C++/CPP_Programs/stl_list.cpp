// program to demonstrate stl list in c++
#include <iostream>
#include <list>
using namespace std;

int main() {
    // Create a list of integers
    list<int> myList = {10, 20, 30, 40};

    // Add elements at front and back
    myList.push_front(5);
    myList.push_back(50);

    // Display list contents
    cout << "List contents: ";
    for (int val : myList) {
        cout << val << " ";
    }

    // Remove specific element
    myList.remove(30);  // Removes all occurrences of 30

    // Sort the list
    myList.sort();

    cout << "\nAfter removing 30 and sorting: ";
    for (int val : myList) {
        cout << val << " ";
    }

    // Reverse the list
    myList.reverse();

    cout << "\nAfter reversing: ";
    for (int val : myList) {
        cout << val << " ";
    }

    return 0;
}

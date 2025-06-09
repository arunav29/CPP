// program to demonstrate stl_vectors
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Create a vector of integers
    vector<int> numbers;

    // Adding elements using push_back
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);
    numbers.push_back(40);
    

    // Display the elements using a loop
    cout << "Vector elements: ";
    for (int i = 0; i < numbers.size(); ++i)
    {
        cout << numbers[i] << " ";
    }
    cout << endl;

    // Inserting an element at specific position
    numbers.insert(numbers.begin() + 1, 15); // Insert 15 at index 1

    // Display the updated vector
    cout << "After insertion: ";
    for (int num : numbers)
    {
        cout << num << " ";
    }
    cout << endl;

    // Removing last element
    numbers.pop_back();

    // Display after pop_back
    cout << "After pop_back: ";
    for (auto it = numbers.begin(); it != numbers.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;

    // Clear the vector
    numbers.clear();

    cout << "Size after clearing: " << numbers.size() << endl;

    return 0;
}

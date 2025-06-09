// program to demonstrate c++ STL Sets
#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s;

    // Insert elements
    s.insert(50);
    s.insert(20);
    s.insert(30);
    s.insert(10);
    s.insert(20); // Duplicate, will not be added but no error

    cout << "Set contents (sorted and unique): ";
    for (int val : s)
    {
        cout << val << " ";
    }

    // Check if an element exists
    if (s.find(30) != s.end())
    {
        cout << "\n30 found in set.";
    }
    else
    {
        cout << "\n30 not found.";
    }

    // Erase an element
    s.erase(20);

    cout << "\nAfter erasing 20: ";
    for (int val : s)
    {
        cout << val << " ";
    }

    return 0;
}

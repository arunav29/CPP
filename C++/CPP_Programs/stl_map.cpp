// Program to demonstrate STL maps
#include <iostream>
#include <map>
using namespace std;

int main()
{
    // Declare a map with int key and string value
    map<int, string> student;

    // Insert values into map
    student[101] = "Alice";
    student[102] = "Bob";
    student[103] = "Charlie";

    // Another way to insert
    student.insert({104, "David"});
    student.insert({104, "David"}); // duplicate ignored
    student.insert({104, "James"}); // duplicate checked in key values since 104 alredy created it is ignored
    // Displaying all key-value pairs
    cout << "Student Map:\n";
    for (auto it : student)
    {
        cout << "Roll No: " << it.first << ", Name: " << it.second << endl;
    }

    // Accessing a value
    cout << "\nStudent with roll no 104 is " << student[104] << endl;

    // Erasing a key
    student.erase(103);

    // Display after erase
    cout << "\nAfter erasing roll no 103:\n";
    for (auto it : student)
    {
        cout << "Roll No: " << it.first << ", Name: " << it.second << endl;
    }

    return 0;
}

// Program to demonstrate stl multimap
#include <iostream>
#include <map>
using namespace std;

int main()
{
    // Declare a multimap
    multimap<int, string> students;

    // Insert multiple entries with same key
    students.insert({1, "Alice"});
    students.insert({2, "Bob"});
    students.insert({1, "Charlie"});// it will add since multimap
    students.insert({3, "David"});
    students.insert({2, "Eva"});// it will add since multimap

    // Display all entries
    cout << "Student multimap entries:\n";
    for (auto &entry : students)// multimap value<int, string> 
    {
        cout << "Roll No: " << entry.first << ", Name: " << entry.second << endl;
    }

    // Display only students with Roll No 2
    cout << "\nStudents with Roll No 2:\n";
    auto range = students.equal_range(2);
    for (auto &entry : students)
    {
        cout << "Roll No: " << entry.first << ", Name: " << entry.second << endl;
    }

    return 0;
}

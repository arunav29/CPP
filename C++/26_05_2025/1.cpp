// Write a C++ program to read and display student information. You can assume student information to be maintained by the system, Information is to be maintained in structure.
#include <iostream>
using namespace std;
struct student
{
    int id;
    char name[20];
    float marks;
};
int main()
{
    student s;
    cout << "Enter the student id:-";
    cin >> s.id;
    cout << "Enter the student name:-";
    cin.ignore();
    cin.getline(s.name, 20);
    cout << "Enter the students mark: ";
    cin.ignore();
    cin >> s.marks;
    cout << "Student id:- " << s.id << endl;
    cout << "Student name:- " << s.name << endl;
    cout << "Student marks:- " << s.marks << endl;

    return 0;
}
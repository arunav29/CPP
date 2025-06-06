// 2.	Create an array of pointers to objects, then write functions to initialize, modify, and delete these objects.
#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    string name;
    int age;

    void display()
    {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

void initializeStudents(Student *students[], int count)
{
    for (int i = 0; i < count; ++i)
    {
        students[i] = new Student(); // allocate new Student object
        students[i]->name = "Student" + to_string(i + 1);
        students[i]->age = 18 + i;
    }
}

void modifyStudent(Student *student, const string &newName, int newAge)
{
    student->name = newName;
    student->age = newAge;
}

void deleteStudents(Student *students[], int count)
{
    for (int i = 0; i < count; ++i)
    {
        delete students[i];
    }
}

int main()
{
    const int SIZE = 3;
    Student *students[SIZE];

    initializeStudents(students, SIZE);

    modifyStudent(students[0], "Ajay", 21);

    for (int i = 0; i < SIZE; ++i)
    {
        students[i]->display();
    }

    deleteStudents(students, SIZE);

    return 0;
}

// Write a student class and use it in your program. Store the data of 10 students and display the sorted data according to their roll numbers, dates of birth,
// and total marks.
#include <iostream>
using namespace std;

class Student {
private:
    int rollNo;
    string name;
    string dob; 
    float marks1, marks2, marks3;

public:
   
    void readData() {
        cout << "Enter Roll Number: ";
        cin >> rollNo;
        cin.ignore();
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Date of Birth (YYYY-MM-DD): ";
        getline(cin, dob);
        cout << "Enter Marks in 3 Subjects: ";
        cin >> marks1 >> marks2 >> marks3;
    }

    void displayData() const {
        cout << "Roll No: " << rollNo
             << ", Name: " << name
             << ", DOB: " << dob
             << ", Total Marks: " << getTotalMarks() << endl;
    }

    int getRollNo() const { return rollNo; }
    string getDOB() const { return dob; }
    float getTotalMarks() const { return marks1 + marks2 + marks3; }
};

void swap(Student &a, Student &b) {
    Student temp = a;
    a = b;
    b = temp;
}

void sortByRollNo(Student arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j].getRollNo() > arr[j + 1].getRollNo()) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void sortByDOB(Student arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j].getDOB() > arr[j + 1].getDOB()) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void sortByTotalMarks(Student arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j].getTotalMarks() < arr[j + 1].getTotalMarks()) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    const int SIZE = 10;
    Student students[SIZE];

    cout << "--- Enter Student Details ---\n";
    for (int i = 0; i < SIZE; ++i) {
        cout << "\nStudent " << i + 1 << ":\n";
        students[i].readData();
    }

    sortByRollNo(students, SIZE);
    cout << "\n--- Students Sorted by Roll Number ---\n";
    for (int i = 0; i < SIZE; ++i)
        students[i].displayData();

    sortByDOB(students, SIZE);
    cout << "\n--- Students Sorted by Date of Birth ---\n";
    for (int i = 0; i < SIZE; ++i)
        students[i].displayData();

    sortByTotalMarks(students, SIZE);
    cout << "\n--- Students Sorted by Total Marks ---\n";
    for (int i = 0; i < SIZE; ++i)
        students[i].displayData();

    return 0;
}

#include<iostream>
#define MAX_STR_LEN 25

using namespace std;

// structure definition
struct Student{
    int prn;
    char student_name[MAX_STR_LEN];
    char email[MAX_STR_LEN];
};

int main(){

    //Accessing Members using structure variable
    Student s1;
    cout << "Enter PRN: ";
    cin >> s1.prn;
    cin.ignore(); // clear newline character left by cin

    cout << "Enter student name: ";
    cin.getline(s1.student_name, MAX_STR_LEN);

    cout << "Enter email: ";
    cin.getline(s1.email, MAX_STR_LEN);

    // Output
    cout << "\n--- Student Details Student 1 ---" << "\n";
    cout << "PRN: " << s1.prn << endl;
    cout << "Name: " << s1.student_name << endl;
    cout << "Email: " << s1.email << endl;

    //Accessing Members using structure pointer
    Student *s2;
    cout << "Enter PRN: ";
    cin >> s2->prn;
    cin.ignore(); // clear newline character left by cin

    cout << "Enter student name: ";
    cin.getline(s2->student_name, MAX_STR_LEN);

    cout << "Enter email: ";
    cin.getline(s2->email, MAX_STR_LEN);

    // Output
    cout << "\n--- Student Details Student 2 ---" << "\n";
    cout << "PRN: " << s2->prn << endl;
    cout << "Name: " << s2->student_name << endl;
    cout << "Email: " << s2->email << endl;
    return 0;
}



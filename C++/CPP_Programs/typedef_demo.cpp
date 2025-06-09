#include<iostream>
#define MAX_STR_LEN 25

using namespace std;

typedef struct{
    int prn;
    char student_name[MAX_STR_LEN];
    char email[MAX_STR_LEN];
}Student;

int main(){
    Student s1;
    cout << "Enter PRN: ";
    cin >> s1.prn;
    cin.ignore(); // clear newline character left by cin

    cout << "Enter student name: ";
    cin.getline(s1.student_name, MAX_STR_LEN);

    cout << "Enter email: ";
    cin.getline(s1.email, MAX_STR_LEN);

    // Output
    cout << "\n--- Student Details ---" << "\n";
    cout << "PRN: " << s1.prn << endl;
    cout << "Name: " << s1.student_name << endl;
    cout << "Email: " << s1.email << endl;
    return 0;
}



// Create a system to manage employees in a company with the following structure:
// A base class Person with data members: name, age.
// A class Employee derived from Person, with additional attributes: empID, department.
// A class Salary that has salary-related attributes: basicPay, HRA, DA, grossPay.
// A class HR that is a friend class of Salary and calculates the gross pay.
// Create a class Manager that is derived from both Employee and Salary
// Requirements:
// demonstrate multiple inheritance.
// Use a friend function in HR to access and modify private data in Salary.
// Accept and display all details.
// Calculate and display the Gross Salary in the friend function.
#include <iostream>
using namespace std;

// Base class Person
class Person
{
protected:
    string name;
    int age;

public:
    void acceptPersonDetails()
    {
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Age: ";
        cin >> age;
        cin.ignore(); // clear newline
    }

    void displayPersonDetails() const
    {
        cout << "Name: " << name << "\nAge: " << age << endl;
    }
};

// Derived class Employee
class Employee : public Person
{
protected:
    int empID;
    string department;

public:
    void acceptEmployeeDetails()
    {
        cout << "Enter Employee ID: ";
        cin >> empID;
        cin.ignore(); // clear newline
        cout << "Enter Department: ";
        getline(cin, department);
    }

    void displayEmployeeDetails() const
    {
        cout << "Employee ID: " << empID << "\nDepartment: " << department << endl;
    }
};

// Salary class
class Salary
{
private:
    float basicPay, HRA, DA, grossPay;

    // Allow HR to access private data
    friend class HR;

public:
    void acceptSalaryDetails()
    {
        cout << "Enter Basic Pay: ";
        cin >> basicPay;
        cout << "Enter HRA: ";
        cin >> HRA;
        cout << "Enter DA: ";
        cin >> DA;
    }

    void displaySalaryDetails() const
    {
        cout << "Basic Pay: " << basicPay << "\nHRA: " << HRA << "\nDA: " << DA << endl;
        cout << "Gross Pay: " << grossPay << endl;
    }
};

// Friend class HR
class HR
{
public:
    void calculateGrossPay(Salary &s)
    {
        s.grossPay = s.basicPay + s.HRA + s.DA;
    }
};

// Manager class with multiple inheritance
class Manager : public Employee, public Salary
{
public:
    void acceptDetails()
    {
        acceptPersonDetails();
        acceptEmployeeDetails();
        acceptSalaryDetails();
    }

    void displayDetails() const
    {
        cout << "\n--- Manager Details ---\n";
        displayPersonDetails();
        displayEmployeeDetails();
        displaySalaryDetails();
    }
};

// Main Function
int main()
{
    Manager m;
    HR hr;

    m.acceptDetails();
    hr.calculateGrossPay(m); // HR calculates the gross pay

    m.displayDetails();

    return 0;
}

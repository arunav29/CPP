// Write a C++ program to maintain employee information and salary information of 10 employees of a company.
// Use Structure for the same. Create a function to calculate the average salary of employees.
// Write a function to compute department-wise average salary of employees.
#include <iostream>
using namespace std;
#include <iostream>
#include <string>
using namespace std;

struct Employee
{
    int id;
    string name;
    string department;
    double salary;
};
double calculateAverageSalary(Employee[], int);
void calculateDeptWiseAverageSalary(Employee employees[], int size)
{
    string departments[10];
    double deptSalary[10] = {0};
    int deptCount[10] = {0};
    int deptIndex = 0;

    for (int i = 0; i < size; i++)
    {
        int j;
        for (j = 0; j < deptIndex; j++)
        {
            if (departments[j] == employees[i].department)
            {
                deptSalary[j] += employees[i].salary;
                deptCount[j]++;
                break;
            }
        }

        if (j == deptIndex)
        {
            departments[deptIndex] = employees[i].department;
            deptSalary[deptIndex] = employees[i].salary;
            deptCount[deptIndex] = 1;
            deptIndex++;
        }
    }

    cout << "\nDepartment-wise Average Salary:\n";
    for (int i = 0; i < deptIndex; i++)
    {
        double average = deptSalary[i] / deptCount[i];
        cout << "Department: " << departments[i]
             << ", Average Salary: " << average << endl;
    }
}

int main()
{
    const int SIZE = 10;
    Employee employees[SIZE];

    cout << "Enter information for 10 employees:\n";
    for (int i = 0; i < SIZE; i++)
    {
        cout << "\nEmployee " << i + 1 << ":\n";
        cout << "ID: ";
        cin >> employees[i].id;
        cin.ignore();
        cout << "Name: ";
        getline(cin, employees[i].name);
        cout << "Department: ";
        getline(cin, employees[i].department);
        cout << "Salary: ";
        cin >> employees[i].salary;
    }

    double avgSalary = calculateAverageSalary(employees, SIZE);
    cout << "\nOverall Average Salary: " << avgSalary << endl;

    calculateDeptWiseAverageSalary(employees, SIZE);

    return 0;
}

double calculateAverageSalary(Employee employees[], int size)
{
    double total = 0;
    for (int i = 0; i < size; i++)
    {
        total += employees[i].salary;
    }
    return total / size;
}
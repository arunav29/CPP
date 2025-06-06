// Create a program to manage employee information. Use inheritance to define a Person base class, and derive an Employee class.
//  Extend it further to a Manager class.'
#include <iostream>
#include <string>
using namespace std;
class person
{
public:
    string name;
    int age;
    person() : name(""), age(0) {}
    person(string n, int a) : name(n), age(a) {}
    void setpersondetails(string n, int a)
    {
        name = n;
        age = a;
    }
    void display() const
    {
        cout << "Name: " << name << " Age: " << age;
    }
};
class employee : public person
{
public:
    int empid;
    double salary;
    employee() : person(), empid(0), salary(0) {}
    employee(string n, int a, int e, double s) : person(n, a), empid(e), salary(s) {}
    void setempdetails(int e, double s)
    {
        empid = e;
        salary = s;
    }
    void display() const
    {
        person::display();
        cout << "Employee id:- " << empid << " Salary:- " << salary;
    }
};
class manager : public employee
{
public:
    string departments;
    manager() : employee(), departments("") {}
    manager(string n, int a, int e, double s, string d) : employee(n, a, e, s), departments(d) {}
    void setmanagerdetails(string d)
    {
        departments = d;
    }
    void display() const
    {
        employee::display();
        cout << " Departments: " << departments;
    }
};
int main()
{
    manager m("Arunav kumar", 22, 2343, 65789.56, "Mathematics");
    m.display();
}
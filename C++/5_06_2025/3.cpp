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
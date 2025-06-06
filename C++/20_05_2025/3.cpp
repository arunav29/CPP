// Write a C++ program to enter the marks of n students in 5 subjects and find the topper
// student from the class (n is current strength of class).
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of students:-";
    cin >> n;
    int marks[n][5];
    int total[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the marks of student " << i + 1 << " in 5 subjects:-";
        total[i] = 0;
        for (int j = 0; j < 5; j++)
        {
            cin >> marks[i][j];
            total[i] += marks[i][j];
        }
    }
    int topper = -1;
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if (total[i] > max)
        {
            max = total[i];
            topper = i;
        }
    }
    cout << "Topper student is :- " << topper + 1 << " with total marks " << max;

    return 0;
}
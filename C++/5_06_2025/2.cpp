// Create a class for student data management which includes prn, course, batch, email id information along with marks in 5 subjects. Create functions to calculate percent marks, grade.
// Create a friend function to the class to display student prn and grade information for n number of students.
#include <iostream>
using namespace std;
class students
{
public:
    int prn;
    string course, batch, emailid, grade;
    double marks[5];
    double percentage;
    students() : percentage(0.0), grade("F") {}
    void input()
    {
        cout << "Enter Prn,course,batch,Email id and marks in 5 subjects ";
        cin >> prn;
        cin.ignore();
        cin >> course >> batch >> emailid;
        for (int i = 0; i < 5; i++)
        {
            cout << "Subject " << i + 1 << ": ";
            cin >> marks[i];
        }
        calculatepercentage();
        calculategrade();
    }
    void calculatepercentage()
    {
        double total = 0;
        for (int i = 0; i < 5; i++)
        {
            total += marks[i];
        }
        percentage = total / 5;
    }
    void calculategrade()
    {
        if (percentage >= 90)
            grade = 'A';
        else if (percentage >= 80)
            grade = 'B';
        else if (percentage >= 70)
            grade = 'C';
        else if (percentage >= 60)
            grade = 'D';
        else
            grade = 'F';
    }
    friend void display(students s[], int n);
};
void display(students s[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "PRN: " << s[i].prn << ", Grade: " << s[i].grade << endl;
    }
}
int main()
{
    int n;
    cout << "Enter the number of students:";
    cin >> n;

    students *s = new students[n];
    for (int i = 0; i < n; i++)
    {
        s[i].input();
    }
    display(s, n);
    return 0;
}
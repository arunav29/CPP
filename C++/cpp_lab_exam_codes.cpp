// Program 1: Arrays - Largest and Smallest Element
#include <iostream>
using namespace std;

int main() {
    int arr[100], n;
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) cin >> arr[i];
    int max = arr[0], min = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] > max) max = arr[i];
        if(arr[i] < min) min = arr[i];
    }
    cout << "Max: " << max << ", Min: " << min << endl;
    return 0;
}

/*

// Program 2: Function Overloading - Area
#include <iostream>
using namespace std;

float area(float r) {
    return 3.14 * r * r;
}
float area(float l, float b) {
    return l * b;
}

int main() {
    cout << "Area of circle (r=2): " << area(2.0f) << endl;
    cout << "Area of rectangle (l=4, b=5): " << area(4.0f, 5.0f) << endl;
    return 0;
}

// Program 3: Inheritance - Person -> Employee
#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;
};

class Employee : public Person {
public:
    int empID;
    string department;
    void input() {
        cout << "Enter name, age, empID, department: ";
        cin >> name >> age >> empID >> department;
    }
    void display() {
        cout << name << ", " << age << ", " << empID << ", " << department << endl;
    }
};

int main() {
    Employee e;
    e.input();
    e.display();
    return 0;
}

// Program 4: Operator Overloading - Integer
#include <iostream>
using namespace std;

class Integer {
    int value;
public:
    Integer(int v = 0) : value(v) {}
    Integer operator+(const Integer& obj) const {
        return Integer(value + obj.value);
    }
    Integer operator+(int num) const {
        return Integer(value + num);
    }
    friend Integer operator+(int num, const Integer& obj) {
        return Integer(num + obj.value);
    }
    void display() const {
        cout << value << endl;
    }
};

int main() {
    Integer a(10), b(5);
    Integer sum1 = a + b;
    Integer sum2 = a + 20;
    Integer sum3 = 15 + b;
    sum1.display();
    sum2.display();
    sum3.display();
    return 0;
}

// Program 5: Object Array - Book
#include <iostream>
using namespace std;

class Book {
    string title, author;
    float price;
public:
    void input() {
        cout << "Enter title, author, price: ";
        cin >> title >> author >> price;
    }
    void display() {
        cout << title << ", " << author << ", " << price << endl;
    }
};

int main() {
    Book books[2];
    for (int i = 0; i < 2; ++i) books[i].input();
    for (int i = 0; i < 2; ++i) books[i].display();
    return 0;
}

// Program 6: Object Pointers - Student
#include <iostream>
using namespace std;

class Student {
    string name;
    int marks;
public:
    void input() {
        cout << "Enter name and marks: ";
        cin >> name >> marks;
    }
    void display() {
        cout << name << ", " << marks << endl;
    }
};

int main() {
    Student* s[2];
    for (int i = 0; i < 2; ++i) {
        s[i] = new Student();
        s[i]->input();
    }
    for (int i = 0; i < 2; ++i) s[i]->display();
    for (int i = 0; i < 2; ++i) delete s[i];
    return 0;
}

*/

// Create a base class Shape with a virtual method area(). Then, create two derived classes, Circle and
// Rectangle, each overriding area() to compute and return their respective areas.

// In Circle, the area should be calculated as π * radius ** 2.
// In Rectangle, the area should be calculated as length * breadth.
// Demonstrate dynamic binding by creating an array of Shape* pointers and call the area() method for
// each shape
#include <iostream>
#include <cmath>
using namespace std;

// Base class Shape
class Shape
{
public:
    virtual double area() const = 0; // pure virtual function
    virtual ~Shape() {}              // virtual destructor for cleanup
};

// Derived class Circle
class Circle : public Shape
{
    double radius;

public:
    Circle(double r) : radius(r) {}

    double area() const
    {
        return M_PI * radius * radius;
    }
};

// Derived class Rectangle
class Rectangle : public Shape
{
    double length, breadth;

public:
    Rectangle(double l, double b) : length(l), breadth(b) {}

    double area() const
    {
        return length * breadth;
    }
};

// Main function to demonstrate dynamic binding
int main()
{
    // Array of Shape pointers
    Shape *shapes[3];

    // Create objects dynamically
    shapes[0] = new Circle(5.0);
    shapes[1] = new Rectangle(4.0, 6.0);
    shapes[2] = new Circle(3.2);

    // Display area using dynamic binding
    for (int i = 0; i < 3; ++i)
    {
        cout << "Area of shape " << i + 1 << " = " << shapes[i]->area() << endl;
    }

    // Cleanup
    // for (int i = 0; i < 3; ++i)
    // {
    //     delete shapes[i];
    // }

    return 0;
}

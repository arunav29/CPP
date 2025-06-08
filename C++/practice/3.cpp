// Create two base classes Engine and Vehicle that have constructors that print "Engine initialized" and
// "Vehicle initialized", respectively.
// Create a derived class Car that inherits from both Engine and Vehicle and has a constructor that prints
// "Car initialized".
// Demonstrate how constructors are called when an object of Car is created
#include <iostream>
using namespace std;

// Base class 1
class Engine
{
public:
    Engine()
    {
        cout << "Engine initialized" << endl;
    }
};

// Base class 2
class Vehicle
{
public:
    Vehicle()
    {
        cout << "Vehicle initialized" << endl;
    }
};

// Derived class
class Car : public Engine, public Vehicle
{
public:
    Car()
    {
        cout << "Car initialized" << endl;
    }
};

int main()
{
    Car c; // Creating object of Car
    return 0;
}

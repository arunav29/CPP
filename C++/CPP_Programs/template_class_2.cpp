// demonstration program for Class template with two types
#include <iostream>
using namespace std;

// Class template with two types
template <typename T1, typename T2>
class Pair {
private:
    T1 first;
    T2 second;

public:
    Pair(T1 a, T2 b) {
        first = a;
        second = b;
    }

    void display() {
        cout << "First: " << first << endl;
        cout << "Second: " << second << endl;
    }

    //T1 getFirst() { return first; }
    //T2 getSecond() { return second; }
};

int main() {
    Pair<int, double> p1(42, 3.14);
    cout << "Pair<int, double>:\n";
    p1.display();

    Pair<string, int> p2("Apples", 25);
    cout << "\nPair<string, int>:\n";
    p2.display();

    return 0;
}

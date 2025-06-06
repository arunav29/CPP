// 2.	Write a function to calculate the Power (Base and Exponent)?
#include <iostream>
using namespace std;
double pow(double b, int e)
{
    double r = 1;
    bool negative = false;
    if (e < 0)
    {
        negative = true;
        e = -e;
    }
    for (int i = 0; i < e; i++)
    {
        r *= b;
    }
    if (negative)
    {
        return 1 / r;
    }
    return r;
}
int main()
{
    int e;
    double b;
    cout << "Enter the base and exponent: ";
    cin >> b >> e;
    double result = pow(b, e);
    cout << "Result: " << result << endl;
}
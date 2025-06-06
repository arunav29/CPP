// 3.	Function to Find the Prime Factors of a Number and Store in an Array?
#include <iostream>
using namespace std;

int findPrimeFactors(int n, int factors[])
{
    int index = 0;

    while (n % 2 == 0)
    {
        factors[index++] = 2;
        n /= 2;
    }

    for (int i = 3; i * i <= n; i += 2)
    {
        while (n % i == 0)
        {
            factors[index++] = i;
            n /= i;
        }
    }

    if (n > 2)
    {
        factors[index++] = n;
    }

    return index;
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int factors[100];
    int count = findPrimeFactors(num, factors);

    cout << "Prime factors: ";
    for (int i = 0; i < count; ++i)
    {
        cout << factors[i] << " ";
    }
    cout << endl;

    return 0;
}

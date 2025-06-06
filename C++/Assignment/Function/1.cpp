// 1.	 Write a function to Check if a Number is Prime?
#include <iostream>
using namespace std;
void prime(int num)
{
    bool isPrime = true;

    if (num <= 1)
    {
        isPrime = false;
    }
    else
    {
        for (int i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime)
    {
        cout << num << " is a prime number.";
    }
    else
    {
        cout << num << " is not a prime number.";
    }
}
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    prime(n);
    return 0;
}
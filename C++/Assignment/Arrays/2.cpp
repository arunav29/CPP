// 2.	Write the code own version of “Strlen” using pointers only.
#include <iostream>
using namespace std;
int strlen(char *a)
{
    char *p = a;
    while (*p != '\0')
    {
        p++;
    }
    return p - a;
}
int main()
{
    char a[100];
    cout << "Enter a string: ";
    cin.getline(a, 100);
    int l = strlen(a);
    cout << "Length of the string: " << l << endl;
}
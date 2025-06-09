#include <iostream>
#include <stdexcept>
using namespace std;

int main()
{
    try
    {
        int numerator = 10;
        int denominator = 0;
        if (denominator == 0) {
        throw runtime_error("Division by zero not allowed!");
        }
        int res = numerator / denominator;
        cout << "Result after division: " << res << endl;
    }
    catch (out_of_range e)
    {
        cout << "Exception: " << e.what() << endl;
    }
    catch(...){
        cout<<"Unknown Exception";
    }
    return 0;
}
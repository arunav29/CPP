// 1.	Write a function that takes a pointer to a pointer (int**) and allocates a 2D array dynamically?
#include <iostream>
using namespace std;
void allocate2DArray(int ***arr, int rows, int cols)
{
    *arr = new int *[rows];
    for (int i = 0; i < rows; ++i)
    {
        (*arr)[i] = new int[cols];
    }
}

int main()
{
    int **myArray;
    int rows = 3, cols = 4;

    allocate2DArray(&myArray, rows, cols);

    cout << "2D Array contents:\n";
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            myArray[i][j] = (i + 1) * (j + 1); // simple initialization
            cout << myArray[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < rows; ++i)
    {
        delete[] myArray[i];
    }
    delete[] myArray;

    return 0;
}

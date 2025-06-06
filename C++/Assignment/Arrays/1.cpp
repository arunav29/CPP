// 1.	Implement matrix multiplication for two 2D arrays.
#include <iostream>
using namespace std;

void input(int matrix[10][10], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << "Enter the element of matrix[" << i << "]" << "[" << j << "]: ";
            cin >> matrix[i][j];
        }
    }
}
void display(int matrix[10][10], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
void multiplication(int a[10][10], int b[10][10], int r1, int c1, int r2, int c2)
{
    int result[10][10];

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            result[i][j] = 0;
            for (int k = 0; k < r2; k++)
            {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    display(result, r1, c2);
}
int main()
{
    int r, c, a[10][10], b[10][10], r1, c1;
    cout << "Enter rows and columns for first matrices: ";
    cin >> r >> c;
    cout << "Enter the elements of first matrix:\n";
    input(a, r, c);
    cout << "Enter rows and columns for second matrices: ";
    cin >> r1 >> c1;
    cout << "Enter the elements of second matrix:\n";
    input(b, r1, c1);
    if (c == r1)
    {
        multiplication(a, b, r, c, r1, c1);
    }
    else
    {
        cout << "Enter the number of columns of first matrix should be equal to the number of rows of second matrix";
    }
}
// Write a menu driven C++ program for matrix operations:
// a. Matrix addition
// b. Matrix multiplication
// c. Matrix transposve

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
void addition(int a[10][10], int b[10][10], int rows, int cols)
{
    int c[10][10];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    display(c, rows, cols);
}
void multiplication(int a[10][10], int b[10][10], int r1, int c1, int r2, int c2)
{ // r1 and c1 are the number of rows and columns of matrix a
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

void transpose(int a[10][10], int r, int c)
{
    int k[10][10];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            k[j][i] = a[i][j];
        }
    }
    display(k, c, r);
}
int main()
{
    int choice, a[10][10], b[10][10], r, c, r1, c1;
    while (true)
    {
        cout << "\n--- Menu ---\n";
        cout << "1.Matrix Addition\n";
        cout << "2.Matrix Multiplication\n";
        cout << "3.Matrix transpose\n";
        cout << "4.Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter rows and columns for matrices: ";
            cin >> r >> c;
            cout << "Enter the elements of first matrix:\n";
            input(a, r, c);
            cout << "Enter the elements of second matrix:\n";
            input(b, r, c);
            addition(a, b, r, c);
            break;
        case 2:
            cout << "Enter rows and columns for first matrices: ";
            cin >> r >> c;
            cout << "Enter the elements of first matrix:\n";
            input(a, r, c);
            cout << "Enter rows and columns for second matrices: ";
            cin >> r1 >> c1;
            cout << "Enter the elements of second matrix:\n";
            input(b, r1, c1);
            if (c = r1)
            {
                multiplication(a, b, r, c, r1, c1);
            }
            else
            {
                cout << "Enter the number of columns of first matrix should be equal to the number of rows of second matrix";
            }
            break;
        case 3:
            cout << "Enter rows and columns for first matrices: ";
            cin >> r >> c;
            cout << "Enter the elements of first matrix:\n";
            input(a, r, c);
            transpose(a, r, c);
            break;
        case 4:
            return 0;
        }
    }
}

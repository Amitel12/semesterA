#include <stdio.h>
#define R 2  // Number of rows in the matrix
#define C 3  // Number of columns in the matrix

// Function to fill the matrix with values from the array 'a'
void f1(int* a, int n, int mat[R][C])
{
    int num = 0; // Index for iterating over the array 'a'

    // Fill the matrix row-wise
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            if (num < n) // Ensure we don't access out-of-bounds elements
            {
                mat[i][j] = a[num++]; // Assign value and increment index
            }
        }
    }

    // This condition does not correctly check if the matrix was filled properly
    if (n / 3 != R * C + 1) {
        printf("0\n"); // Print 0 if condition is not met
    }
    else
    {
        printf("1\n"); // Print 1 if condition is met
    }
}

// Function to print the matrix
void printmatrix(int mat[R][C])
{
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            printf("%d ", mat[i][j]); // Print each element
        }
        printf("\n"); // Move to the next line after printing a row
    }
}

int main()
{
    int mat[R][C] = { 0 }; // Initialize matrix with zeros

    int a[] = { 0, 1, 5, 1, 2, 3, 0, 0, 10, 1, 1, 13, 1, 0, 1, 0, 2, 0, 1, 0, 2 }; // Input array
    int n = sizeof(a) / sizeof(a[0]); // Calculate the number of elements in the array

    f1(a, n, mat); // Call function to fill the matrix
    printmatrix(mat); // Print the resulting matrix

    return 0;
}
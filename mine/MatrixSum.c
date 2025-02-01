#include <stdio.h>  // Standard I/O library for printf and scanf
#define N 4  // Define a constant for the matrix size

// Function to print a NxN matrix
void printMatrix(int matrix[N][N]) {
    for (int i = 0; i < N; i++) {  // Loop through rows
        for (int j = 0; j < N; j++) {  // Loop through columns
            printf("%d ", matrix[i][j]);  // Print each element
        }
        printf("\n");  // New line after each row
    }
}

// Function to check if the sum of all elements in each row 
// minus the diagonal element equals the diagonal element
int isSum(int matrix[N][N]) {
    int i, j, sum;

    // Loop through each row
    for (i = 0; i < N; i++) {
        sum = 0;  // Initialize sum for each row

        // Loop through each element in the row to calculate sum
        for (j = 0; j < N; j++) {
            sum += matrix[i][j];  // Add each element in the row
        }

        // Check if sum of non-diagonal elements equals the diagonal element
        if (sum - matrix[i][i] != matrix[i][i]) {
            return 0;  // Condition fails, return 0
        }
    }
    return 1;  // If all rows satisfy the condition, return 1
}

// Main function - Entry point of the program
int main() {
    // Define and initialize a 4x4 matrix
    int matrix[N][N] = {
        {10, 2,  7,  1},
        { 2, 7, -1,  6},
        { 1,-2, -6, -5},
        {-2, 4,  7,  9}
    };

    // Print the matrix
    printMatrix(matrix);

    // Call isSum() and print the result
    printf("Result: %d\n", isSum(matrix));

    return 0;  // Return 0 to indicate successful execution
}

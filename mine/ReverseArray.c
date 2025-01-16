#include <stdio.h>

// Function to reverse the elements of an array
void Reverse(int array[], int length);

int main() 
{
    // Initialize two arrays
    int Array1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 }; // First array
    int Array2[] = { 8, 5, 4, 6, 9, 1, 7, 2, 3 }; // Second array

    int length = 9; // Length of both arrays (number of elements)

    // Reverse the first array
    Reverse(Array1, length);
    // Reverse the second array
    Reverse(Array2, length);

    // Print the reversed first array
    printf("Reversed Array1: ");
    for (int i = 0; i < length; i++) {
        printf("%d ", Array1[i]);
    }
    printf("\n"); // Move to the next line

    // Print the reversed second array
    printf("Reversed Array2: ");
    for (int i = 0; i < length; i++) {
        printf("%d ", Array2[i]);
    }
    printf("\n"); // Move to the next line

    return 0; // Indicate that the program executed successfully
}

// Function to reverse the elements of an array
void Reverse(int array[], int length)
{
    int temp = 0; // Temporary variable for swapping elements

    // Loop to reverse the array elements
    for (int i = 0; i < length / 2; i++) 
    {
        // Swap the i-th element with the (length - i - 1)-th element
        temp = array[i];
        array[i] = array[length - i - 1];
        array[length - i - 1] = temp;
    }
}

#include <stdio.h>

// Function prototype to swap the values of two integers
void swap(int* x, int* y);

void main()
{
    int a = 0, b = 0; // Variables to store user-provided numbers

    // Prompt the user to input two integers
    printf("Give me a number for a, b\n");
    scanf_s("%d %d", &a, &b); // Read the values into variables `a` and `b`

    // Display the values of `a` and `b` before swapping
    printf("You chose A:%d, B:%d\n", a, b);

    // Call the `swap` function to swap the values of `a` and `b`
    swap(&a, &b); // Pass the addresses of `a` and `b` to the function

    // Display the values of `a` and `b` after swapping
    printf("After swap A:%d, B:%d", a, b);
}

// Function to swap the values of two integers using pointers
void swap(int* x, int* y)
{
    int temp = 0;   // Temporary variable to hold the value of `x`
    temp = *x;      // Store the value pointed to by `x` in `temp`
    *x = *y;        // Copy the value pointed to by `y` into the location pointed to by `x`
    *y = temp;      // Copy the value in `temp` into the location pointed to by `y`
}

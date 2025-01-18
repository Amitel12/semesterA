#include <stdio.h>
#include <stdlib.h>

void main()
{
    // Declare a pointer to store the base address of the dynamically allocated array
    int* a;
    int length = 0; // Variable to store the length of the array entered by the user

    // Prompt the user to enter the length of the array
    printf("Enter a length: ");
    scanf_s("%d", &length); // Read the length input from the user

    // Dynamically allocate memory for the array based on the entered length
    a = malloc(length * sizeof(int)); 

    // Print the base address of the allocated memory
    printf("Address of a: %p\n", a);

    // Initialize the array with values from 0 to (length - 1)
    for (int i = 0; i < length; i++)
        a[i] = i;

    // Print each element of the array along with its memory address
    for (int i = 0; i < length; i++)
        printf("a[%d] = %d | Address: %p\n", i, a[i], &a[i]);

    // Free the dynamically allocated memory to prevent memory leaks
    free(a);
}

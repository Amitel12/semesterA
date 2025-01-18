#include <stdio.h>
#include <stdlib.h>

// Function prototype (not used in this code, but declared)
void memory_hog(int size);

int main()
{
    int size = 0;

    // Prompt the user to enter the size of the array
    printf("Enter size: ");
    scanf_s("%d", &size);

    // Dynamically allocate memory for an array of 10 integers, initialized to 0
    int* a = calloc(10, sizeof(int));

    // Fill the array with values in descending order from 'size' to 1
    for (int i = 0; i < size; i++) 
        a[i] = size - i;

    // Print the array elements
    for (int i = 0; i < size; i++)
        printf("a[%d] = %d\n", i, a[i]);

    printf("\n");

    // Print the address of the allocated memory block
    printf("a: %p\n", a);

    // Resize the allocated memory block to hold (size + 5) integers
    a = realloc(a, sizeof(int) * (size + 5));

    // Initialize the new elements (from 'size' to 'size + 4') with the value 9
    for (int i = size; i < (size + 5); i++) 
        a[i] = 9;

    // Print all the elements in the resized array
    for (int i = 0; i < (size + 5); i++)
        printf("a[%d] = %d\n", i, a[i]);

    // Free the dynamically allocated memory
    free(a);

    // The following code is commented out because it attempts to access memory
    // that has already been freed, which is undefined behavior in C.

    /*
    int* save = a;
    printf("save: %p\n", save);
    for (int i = 0; i < 10; i++)
        printf("save[%d] = %d\n", i, save[i]);
    printf("\n");
    */

    return 0;
}

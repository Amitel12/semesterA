// Initial array: 5, 9, 7, 6, 4, 0, 2, 3, 8, 1
//
// Step 0: 0, 9, 7, 6, 4, 5, 2, 3, 8, 1
// Step 1: 0, 1, 7, 6, 4, 5, 2, 3, 8, 9
// Step 2: 0, 1, 2, 6, 4, 5, 7, 3, 8, 9
// Step 3: 0, 1, 2, 3, 4, 5, 7, 6, 8, 9
// Step 4: 0, 1, 2, 3, 4, 5, 7, 6, 8, 9
// Step 5: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
// Step 6: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
// Step 7: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
// Step 8: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
// This is the visualization of how the selection sort algorithm progresses.

// Selection Sort Implementation
#include <stdio.h>

int main()
{
    // Initialize the unsorted array and its length
    int array[] = { 5, 9, 7, 6, 4, 0, 2, 3, 8, 1 };
    int length = 10;

    // Perform selection sort
    for (int i = 0; i < length - 1; i++) // Outer loop iterates through the array
    {
        int min_pos = i; // Assume the current position `i` has the smallest element

        // Inner loop to find the smallest element in the unsorted portion
        for (int j = i + 1; j < length; j++)
            if (array[j] < array[min_pos]) // Update `min_pos` if a smaller element is found
                min_pos = j;

        // Swap the smallest element found with the element at position `i`
        if (min_pos != i)
        {
            int temp = array[i];
            array[i] = array[min_pos];
            array[min_pos] = temp;
        }

        // Print the array after each step to visualize the sorting process
        printf("Step %d: ", i);
        for (int k = 0; k < length; k++)
            printf("%d ", array[k]);
        printf("\n");
    }

    // Print the final sorted array
    printf("\nFinal Sorted Array:\n");
    for (int i = 0; i < length; i++)
    {
        printf("array[%d] = %d\n", i, array[i]);
    }

    return 0; // Indicate successful program termination
}

//Animation : https://shorturl.at/q6Occ
#include <stdio.h>
#include <stdbool.h>

// Function to perform Bubble Sort on an array
void bubble_sort(int array[], int length);

int main()
{
    // Initialize an array with unsorted integers
    int array[] = { 1, 3, 7, 9, 0, 2, 4, 5, 8, 6 };
    int length = 10; // Number of elements in the array

    // Call the bubble_sort function to sort the array
    bubble_sort(array, length);

    // Print the sorted array
    for (int i = 0; i < length; i++)
        printf("array[%d] = %d\n", i, array[i]);

    return 0; // Indicate successful program termination
}

// Function to perform Bubble Sort
void bubble_sort(int array[], int length)
{
    bool swapped = false; // Variable to track if a swap occurred during an iteration
    int i = 0;            // Outer loop counter (to track the number of passes)

    // Repeat the sorting process until no swaps are needed
    do
    {
        swapped = false; // Reset the swap flag for the current pass

        // Inner loop to compare and swap adjacent elements
        for (int j = 0; j < (length - 1 - i); j++) // `length - 1 - i` reduces the range of comparison
        {
            if (array[j] > array[j + 1]) // If the current element is greater than the next element
            {
                // Swap the two elements
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;

                swapped = true; // Set the swap flag to true, indicating a swap occurred
            }
        }

        i++; // Increment the outer loop counter after each pass
    } while (swapped); // Continue until no swaps are needed (array is sorted)
}
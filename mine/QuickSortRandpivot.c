#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to swap the values of two integers
void swap(int* x, int* y);

// Function to start the quicksort algorithm
void quicksort(int array[], int length);

// Recursive function to perform quicksort on a subarray
void quicksort_recursion(int array[], int low, int high);

// Function to partition the array around a randomly selected pivot
int partition(int array[], int low, int high);

int main()
{
    // Example array to be sorted
    int array[] = { 10, 11, 23, 44, 8, 15, 3, 9, 12, 45, 56, 45, 45 };
    int length = 13; // Number of elements in the array

    // Perform quicksort on the array
    quicksort(array, length);

    // Print the sorted array
    for (int i = 0; i < length; i++)
        printf("%d ", array[i]);
    printf("\n");

    return 0; // Indicate successful program termination
}

// Function to swap two elements in the array
void swap(int* x, int* y)
{
    int temp = *x; // Temporarily store the value of x
    *x = *y;       // Assign the value of y to x
    *y = temp;     // Assign the stored value of x to y
}

// Function to initialize and start the quicksort algorithm
void quicksort(int array[], int length)
{
    // Seed the random number generator
    srand(time(NULL));

    // Call the recursive quicksort function
    quicksort_recursion(array, 0, length - 1);
}

// Recursive function for quicksort
void quicksort_recursion(int array[], int low, int high)
{
    if (low < high) // Ensure the subarray has at least two elements
    {
        // Partition the array and get the pivot index
        int pivot_index = partition(array, low, high);

        // Recursively sort the subarray to the left of the pivot
        quicksort_recursion(array, low, pivot_index - 1);

        // Recursively sort the subarray to the right of the pivot
        quicksort_recursion(array, pivot_index + 1, high);
    }
}

// Partition function to reorganize the array around a random pivot
int partition(int array[], int low, int high)
{
    // Select a random pivot index within the range [low, high]
    int pivot_index = low + (rand() % (high - low + 1));

    // Swap the pivot element with the last element in the range
    if (pivot_index != high)
        swap(&array[pivot_index], &array[high]);

    int pivot_value = array[high]; // Use the last element as the pivot
    int i = low;                   // Initialize the index for smaller elements

    // Iterate through the array from 'low' to 'high - 1'
    for (int j = low; j < high; j++)
    {
        // If the current element is less than or equal to the pivot
        if (array[j] <= pivot_value)
        {
            swap(&array[i], &array[j]); // Swap the current element with the element at index 'i'
            i++;                        // Move the index for smaller elements
        }
    }

    // Place the pivot in its correct position
    swap(&array[i], &array[high]);

    return i; // Return the index of the pivot
}

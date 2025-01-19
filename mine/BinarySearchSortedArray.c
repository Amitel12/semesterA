#include <stdio.h>

// Function prototype for binary search
// Takes an array, the target element 'e', and the current range defined by 'left' and 'right' indices
int binary_search(int array[], int e, int left, int right);

int main()
{
    // Predefined sorted array for binary search
    int sorted[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13 };

    // Perform binary search to find the index of the element '5'
    int index = binary_search(sorted, 5, 0, 12);

    // Print the index of the element '5' (or -1 if not found)
    printf("Index of 5: %d\n", index);

    return 0; // Indicate successful program termination
}

// Recursive binary search function
int binary_search(int array[], int e, int left, int right)
{
    // Calculate the midpoint of the current range
    int mid = left + (right - left) / 2;

    // Base case: If the range is invalid, return -1 (element not found)
    if (left > right)
        return -1;

    // If the element at the midpoint matches the target, return its index
    if (array[mid] == e)
        return mid;

    // If the target is smaller than the midpoint value, search the left half
    if (array[mid] > e)
        return binary_search(array, e, left, mid - 1);

    // If the target is larger than the midpoint value, search the right half
    else
        return binary_search(array, e, mid + 1, right);
}

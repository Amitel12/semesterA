#include <stdio.h>

// Function to find the maximum value in an array
int Maximum(int array[], int length);

int main()
{
    // Initialize an array with predefined values
    int myarray[] = { 1, 5, 1, 18, 12, 4, 7, 23, 14, 8 };

    // Define the length of the array
    int length = 10;

    // Call the Maximum function to find and print the maximum value in the array
    Maximum(myarray, length);

    return 0; // Indicate that the program executed successfully
}

// Function to find the maximum value in an array
int Maximum(int array[], int length)
{
    // Initialize max with the first element of the array
    int max = array[0];

    // Iterate through the array starting from the second element
    for (int i = 1; i < length; i++)
    {
        // If the current element is greater than max, update max
        if (max < array[i])
            max = array[i];
    }

    // Print the maximum value found in the array
    printf("The maximum is: %d\n", max);

    return max; // Return the maximum value (if needed elsewhere)
}

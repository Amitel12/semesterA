#include <stdio.h>

// Function to perform addition of two integers
double add(int x, int y)
{
    return x + y; // Return the sum of x and y
}

// Function to perform subtraction of two integers
int subtract(int x, int y)
{
    return x - y; // Return the difference of x and y
}

// Function to perform multiplication of two integers
int multiply(int x, int y)
{
    return x * y; // Return the product of x and y
}

// Function to perform division of two integers
int divide(int x, int y)
{
    return x / y; // Return the quotient of x and y
}

// Function to select an operation based on user input
int (*select_operation())(int, int)
{
    int option = 0; // Variable to store the user's choice

    // Display a menu of operations
    printf("Select An Operation\n");
    printf("0) Add\n");
    printf("1) Subtract\n");
    printf("2) Multiply\n");
    printf("3) Divide\n");
    printf("Enter: ");

    // Read the user's choice
    scanf_s("%d", &option);

    // Return the corresponding function pointer based on the choice
    if (option == 0)
        return add; // Return the address of the add function
    else if (option == 1)
        return subtract; // Return the address of the subtract function
    else if (option == 2)
        return multiply; // Return the address of the multiply function
    else if (option == 3)
        return divide; // Return the address of the divide function
    else
        return NULL; // Return NULL if an invalid option is selected
}

int main()
{
    // Get the function pointer for the selected operation
    int (*operation)(int, int) = select_operation();

    // Check if a valid operation was selected
    if (operation == NULL)
    {
        printf("Invalid operation selected!\n");
        return 1; // Exit with error code
    }

    // Perform the selected operation with example inputs (20 and 5)
    printf("Answer: %d\n", operation(20, 5)); // Call the selected function and print the result

    return 0; // Indicate successful program termination
}

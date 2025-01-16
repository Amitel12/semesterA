#include <stdio.h>  // Includes the standard input/output library for using printf and scanf functions

// Function declaration for the Fibonacci function
int fib(int n);  // Fixed: Added the parameter type `int`

int main() {
    int num;  // Variable to store the user input

    // Prompt the user to enter the position in the Fibonacci sequence
    printf("fibb on place: ");
    
    // Read the input from the user and store it in the variable `num`
    scanf_s("%d", &num);

    // Call the `fib` function to calculate the Fibonacci number at position `num`
    int result = fib(num);

    // Print the result
    printf("is: %d", result);

    // Return 0 to indicate that the program executed successfully (optional but recommended)
    return 0;
}

// Recursive function to calculate the Fibonacci number at position `n`
int fib(int n) {
    // Base case: if n is 0 or 1, return n directly
    if (n <= 1)
        return n;

    // Recursive case: return the sum of the two previous Fibonacci numbers
    return fib(n - 1) + fib(n - 2);
}

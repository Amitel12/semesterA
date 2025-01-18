#include <stdio.h>
#include <stdbool.h>

// Function to check if the temperature is at or below freezing point in Celsius
bool freeze_C(int temperature)
{
    if (temperature <= 0) // Freezing point in Celsius is 0°C
        return true;      // Return true if temperature is at or below 0°C
    else
        return false;     // Otherwise, return false
}

// Function to check if the temperature is at or below freezing point in Fahrenheit
bool freeze_F(int temperature)
{
    if (temperature <= 32) // Freezing point in Fahrenheit is 32°F
        return true;       // Return true if temperature is at or below 32°F
    else
        return false;      // Otherwise, return false
}

// Function that determines if the temperature is freezing based on a provided check function
void is_freezing(bool (*freeze_check)(int))
{
    int temperature = 0; // Variable to store the temperature entered by the user

    // Prompt the user to enter a temperature
    printf("Enter temperature: ");
    scanf_s("%d", &temperature); // Read the temperature from the user

    // Use the provided function pointer to check if the temperature is freezing
    if (freeze_check(temperature))
        printf("It's Freezing\n"); // If the function returns true, print "It's Freezing"
    else
        printf("It's Not Freezing!\n"); // Otherwise, print "It's Not Freezing"
}

int main()
{
    // Check freezing status in Celsius
    printf("\nCelsius...\n\n");
    is_freezing(freeze_C); // Pass freeze_C function as a parameter

    // Check freezing status in Fahrenheit
    printf("\nFahrenheit...\n\n");
    is_freezing(freeze_F); // Pass freeze_F function as a parameter

    return 0; // Indicate successful program termination
}

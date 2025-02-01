#include <stdio.h>
#include <string.h>  // Needed for strlen()

// Function to remove duplicate characters from a string
void assholes(char str[])
{
    int i = 0;  // Index to iterate through the string
    int RemoveDupes = 0;  // Tracks the number of duplicate characters found
    int count[26] = { 0 };  // Array to track occurrences of each lowercase letter ('a' - 'z')

    // Iterate through the string until the null terminator ('\0') is reached
    while (str[i] != '\0')
    {
        // Check if the current character has already appeared before
        if (count[str[i] - 'a'] > 0)
        {
            RemoveDupes++;  // Increment the count of duplicate characters
        }
        else if (i < strlen(str))  // Ensure `i` is within the valid range
        {
            count[str[i] - 'a']++;  // Mark this character as seen
            str[i - RemoveDupes] = str[i];  // Shift non-duplicate character to its new position
        }
        i++;  // Move to the next character
    }

    // Null-terminate the modified string at the correct position
    str[i - RemoveDupes] = '\0';
}

// Main function to test the removal of duplicates
void main()
{
    char str[] = "blahblahblah";  // Define input string
    assholes(str);  // Call function to remove duplicate characters
    puts(str);  // Print the modified string
}

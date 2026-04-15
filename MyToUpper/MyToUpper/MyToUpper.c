// Programmer:     Brian Lorick
// Date:           04/04/2024
// Program Name:   MyToUpper
// Chapter:        Chapter 6 - Functions
// Description:    The program then utilizes the custom "MyToUpper" function to convert both a copy and the original string to uppercase.
//                 The program converts lowercase characters within a string to uppercase then displays the converted strings.


#include <stdio.h>      // Include standard input/output library
#include <string.h>     // Include string manipulation functions

#define MAX_LENGTH 20   // Define maximum length for the string

void MyToUpper(char* str)      // Define function MyToUpper that takes a pointer to a character array
{
    while (*str)    // Start a loop that iterates until the end of the string is reached
    {
        if (*str >= 'a' && *str <= 'z') // Check if the character is lowercase
        {
            *str = *str - 32;                 // Convert lowercase to uppercase by subtracting 32 (ASCII difference)
        }
        str++;     // Move to the next character in the string
    }
}

int main() {                   // Define the main function
    char original[MAX_LENGTH];   // Declare an array to store the original string
    char copy[MAX_LENGTH];       // Declare an array to store the copy of the string

    printf("Enter a string: ");     // Prompt the user to enter a string
    fgets(original, sizeof(original), stdin);   // Read the string from the user input

    // Remove newline character from fgets
    original[strcspn(original, "\n")] = '\0';   // Replace the newline character with a null terminator

    printf("The string you entered was: %s\n", original);   // Print the original string entered by the user

    // Copy the original string to avoid modifying it directly
    strcpy(copy, original);   // Copy the original string to the copy array

    printf("\n"); //Blank Line

    // Using MyToUpper() to convert the original string
    MyToUpper(copy);    // Convert the copy of the string to uppercase using MyToUpper() function
    printf("Using MyToUpper() to convert the original string: %s\n", copy);   // Print the converted copy of the string

    // Using MyToUpper() to convert the copy of the string
    MyToUpper(original);    // Convert the original string to uppercase using MyToUpper() function
    printf("Using MyToUpper() to convert the copy of the string: %s\n", original);   // Print the converted original string

    printf("\n"); //Blank Line

    return 0;   // Return 0 to indicate successful execution of the program
}
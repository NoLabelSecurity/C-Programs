// Programmer:     Brian Lorick
// Date:           04/01/2024
// Program Name:   C to F
// Chapter:        Chapter 6 - Functions
// Description:    Program prompts the user to enter a starting and ending temperature in Fahrenheit.
//                 Program then converts Fahrenheit temperatures to Celsius and displays them in a table.


#define _CRT_SECURE_NO_WARNINGS // Disable warnings (and errors) when using non-secure versions of printf, scanf, strcpy, etc.
#include <stdio.h> // Needed for working with printf and scanf


// Function to convert Fahrenheit to Celsius.
double fahrenheitToCelsius(double fahrenheit)
{
    return (5.0 / 9.0) * (fahrenheit - 32); // Fahrenheit to Celsius Conversion formula.
}

int main() {
    int startTemp; // Starting temprature variable.
    int endTemp; // Ending temprature variable.

    // Get the starting temperature from the user.
    printf("Enter a starting Fahrenheit temperature: "); // Prompt user to input starting temprature.
    scanf("%d", &startTemp); // Read the starting temperature entered by the user.

    // Validating the starting temperature range.
    while (startTemp < -100 || startTemp > 300) // Loop until a valid starting temperature is entered.
    {
        printf("   The starting temperature must be between -100 and 300 degrees.\n"); // Error: input not within temperature range.
        printf("   Please re-enter the starting temperature: "); // Prompt user to re-enter valid input.
        scanf("%d", &startTemp); // Read the starting temperature entered by the user.
    }

    // Getting the ending temperature from the user.
    printf("Enter an ending Fahrenheit temperature: "); // Prompt user to input ending temprature.
    scanf("%d", &endTemp); // Read the ending temperature entered by the user.

    // Validate the ending temperature range and relationship with the starting temperature.
    while (endTemp < -100 || endTemp > 300 || endTemp <= startTemp) // Loop until a valid ending temperature is entered.
    {
        if (endTemp < -100 || endTemp > 300) // Check if ending temperature is out of range.
        {
            printf("   The ending temperature must be between -100 and 300 degrees.\n"); // Error: input not within temperature range.
        }
        else
        {
            printf("   The ending temperature, %d, must be greater than the starting temperature.\n", endTemp); // Prompt for valid relationship between start and end temperatures.
        }
        printf("   Please re-enter the ending temperature: "); // Prompt user to re-enter valid input.
        scanf("%d", &endTemp); // Read the ending temperature entered by the user
    }

    // Display the table header and temprature data.
    printf("\nFahrenheit\tCelsius\n"); // Table header

    // Display the table of Fahrenheit temperatures and their equivalent Celsius temperatures.
    for (int i = startTemp; i <= endTemp; i++) // Loop to calculate and print Fahrenheit and Celsius values.
    {
        printf("%d\t\t%.1f\n", i, fahrenheitToCelsius(i)); // Output Fahrenheit and Celsius values in table format.
    }
    
    printf("\n"); // Blank Line

    return 0; // end main()
}
// Programmer:     Brian Lorick & Tyler Goss
// Date:           03/13/2024
// Program Name:   Rainfall Stats
// Chapter:        Chapter 5 - Arrays
// Description:    This program prompts the user to enter rainfall values for each month of the year, then displays various statistics. 
//                 Statistics such as total rainfall, average rainfall, lowest and highest rainfall, and the corresponding months.

#define _CRT_SECURE_NO_WARNINGS // Disable warnings (and errors) when using non-secure versions of printf, scanf, strcpy, etc.
#include <stdio.h> // Include standard input-output library for printf and scanf functions

int main(void) { // Main()

    // Variable Declarations
    double rainfall[13];        // Array to hold rainfall values, 1 extra element for easy indexing from 1 to 12
    double total = 0.0;         // Variable to store the total rainfall
    double average;             // Variable to store the average rainfall
    double lowest = 999.9;      // Variable to store the lowest rainfall, initialized with a large value
    double highest = 0.0;       // Variable to store the highest rainfall, initialized with zero

    int lowestIndex;            // Variable to store the index of the lowest rainfall
    int highestIndex;           // Variable to store the index of the highest rainfall

    const char* months[13] = { "", "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec" }; // Array to hold month names


    // Input
    for (int i = 1; i <= 12; i++) // Loop through each month
    {
        printf("Enter the rainfall (in inches) for %s: ", months[i]); // Print message asking user to input rainfall for current month, choosing the correct month name based on index
        scanf(" %lf", &rainfall[i]); // Read and store rainfall value entered by user for current month
        total += rainfall[i]; // Add current month's rainfall value to the total

        if (rainfall[i] < lowest) // Check if current month's rainfall is lower than the lowest recorded so far
        {
            lowest = rainfall[i]; // Update lowest rainfall value
            lowestIndex = i; // Update index of lowest rainfall
        }

        if (rainfall[i] > highest) // Check if current month's rainfall is higher than the highest recorded so far
        {
            highest = rainfall[i]; // Update highest rainfall value
            highestIndex = i; // Update index of highest rainfall
        }
    }

    // Output
    printf("\nThe rainfall that was entered was:\n"); // Print message indicating rainfall data is being displayed

    for (int i = 1; i <= 6; i++) // Loop through months Jan to Jun
    {
        printf("%s\t", months[i]); // Print month name followed by a tab
    }
    printf("\n");


    for (int i = 1; i <= 6; i++) // Loop through months Jan to Jun
    {
        printf("%.1lf\t", rainfall[i]); // Print rainfall value followed by a tab
    }
    printf("\n\n");


    for (int i = 7; i <= 12; i++) // Loop through months Jul to Dec
    {
        printf("%s\t", months[i]); // Print month name followed by a tab
    }
    printf("\n");


    for (int i = 7; i <= 12; i++) // Loop through months Jul to Dec
    {
        printf("%.1lf\t", rainfall[i]); // Print rainfall value followed by a tab
    }
    printf("\n\n");


    // Calculate average rainfall
    average = total / 12.0;


    // Print total rainfall
    printf("The total rain that fell was %.1lf inches.\n", total);

    // Print average rainfall
    printf("The average monthly rainfall was %.1lf inches.\n", average);

    // Print lowest rainfall and corresponding month
    printf("The lowest monthly rainfall was %.1lf inches in %s.\n", lowest, (lowestIndex <= 6) ? months[lowestIndex] : months[lowestIndex]);

    // Print highest rainfall and corresponding month
    printf("The highest monthly rainfall was %.1lf inches in %s.\n", highest, (highestIndex <= 6) ? months[highestIndex] : months[highestIndex]);

    printf("\n");

    return 0;
} // end main()

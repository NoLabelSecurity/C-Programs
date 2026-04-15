// Programmer:    Brian Lorick & Tyler Goss
// Date:          02/26/2024
// Program Name:  Calories Burned
// Chapter:       Chapter 4 - Repetition
// Description:   This program calculates the number of calories burned during a run for various durations.
//                The program then displays the durations and calories burned using different loops.

#define _CRT_SECURE_NO_WARNINGS // Disable warnings (and errors) when using non-secure versions of printf, scanf, strcpy, etc.
#include <stdio.h> // Needed for working with printf and scanf.

int main(void) {

    // Variable Declarations
    double displayCal = 0.0;                    // Variable to store calculated calories burned.
    int displayMin = 0;                         // Variable to store current minutes of running.
    const double CALORIES_PER_MINUTE = 3.9;     // Constant representing the calories burned per minute.
    const int START_MINUTES = 5;                // Constant representing the starting duration of the run.
    const int END_MINUTES = 20;                 // Constant representing the ending duration of the run.
    const int INCREMENT_MINUTES = 3;            // Constant representing the increment in minutes for each iteration.

    // Display basic information.
    printf("You burn 3.9 calories every minute you run.\n");  // Inform the user of the calorie burning rate.
    printf("This shows how many calories you burn if you ran for %d to %d minutes.\n\n", START_MINUTES, END_MINUTES);  // Inform the user of the range of minutes considered.

    // Display using a while loop.
    printf("\tMinutes Calories\n");  // Header for the table.
    printf("Using a while loop\n"); // Indicate the while loop being used.

    displayMin = START_MINUTES;  // Initialize display minutes with the starting value.

    while (displayMin <= END_MINUTES) // Loop until reaching the end duration.
    {
        displayCal = CALORIES_PER_MINUTE * displayMin;  // Calculate calories burned for current minutes.
        printf("\t   %d\t   %.2f\n", displayMin, displayCal);  // Display minutes and corresponding calories burned.
        displayMin += INCREMENT_MINUTES;  // Increment minutes for the next iteration.
    }


    // Display using a do-while loop.
    printf("\nUsing a do-while loop\n");  // Indicate the do-while loop being used.

    displayMin = START_MINUTES;  // Reinitialize display minutes with the starting value.

    do
    {
        displayCal = CALORIES_PER_MINUTE * displayMin;  // Calculate calories burned for current minutes.
        printf("\t   %d\t   %.2f\n", displayMin, displayCal);  // Display minutes and corresponding calories burned.
        displayMin += INCREMENT_MINUTES;  // Increment minutes for the next iteration.
    }

    while (displayMin <= END_MINUTES);  // Loop until reaching the end duration.


    // Display using a for loop.
    printf("\nUsing a for loop\n");  // Indicate the for loop being used.

    for (displayMin = START_MINUTES; displayMin <= END_MINUTES; displayMin += INCREMENT_MINUTES) // Loop through the range of minutes with specified increment.
    {
        displayCal = CALORIES_PER_MINUTE * displayMin;  // Calculate calories burned for current minutes.
        printf("\t   %d\t   %.2f\n", displayMin, displayCal);  // Display minutes and corresponding calories burned.
    }

    printf("\n\n");

    return 0;
} // end main()
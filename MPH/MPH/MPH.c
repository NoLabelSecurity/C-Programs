// Programmer:      Brian Lorick
// Date:            1/26/2024
// Program Name:    MPH
// Chapter:         Chapter 2 - Fundamentals
// Description:     The user will be prompted for the distance and the time traveled.
//                  The program will calculate [Rate=Distance/Time] output the user's miles per hour.

#define _CRT_SECURE_NO_WARNINGS // Disable warnings (and errors) when using non-secure versions of printf, scanf, strcpy, etc.
#include <stdio.h> // Needed for working with printf and scanf

int main(void)
{
    // Constant and Variable Declarations
    const int MINUTES_TO_HOURS = 60; // Conversion factor for minutes to hours
    int milesPerHour;
    int numMinutes;
    double milesDriven;

    // *** INPUT ***
    printf("Enter the number of miles driven: ");
    scanf("%lf", &milesDriven);

    printf("Enter the number of minutes that it took to drive the %.1lf miles: ", milesDriven);
    scanf("%d", &numMinutes);

    printf("\n"); // *** Blank Line ***


    // *** PROCESS ***
    milesPerHour = (int)(milesDriven / (numMinutes / (double)MINUTES_TO_HOURS));


    // *** OUTPUT ***
    printf("Based on a trip of %.1lf miles that took %d minutes,\n", milesDriven, numMinutes); // Program outputs the user's miles per hour
    printf("your speed was %d MPH.\n", milesPerHour);

    printf("\n"); // *** Blank Line ***

    return 0;
} // end main()
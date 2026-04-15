// Programmer:     Brian Lorick
// Date:           04/08/2024
// Program Name:   Progs 2, 3, 4
// Chapter:        Chapter 6 - Functions
// Description:    Program allows users to select and run different functions corresponding to menu choices.
//                 Options include splitting a double, converting seconds, and calculating burned calories.

#define _CRT_SECURE_NO_WARNINGS // Disable warnings (and errors) when using non-secure versions of printf, scanf, strcpy, etc.
#include <stdio.h>

// Function prototypes
int displayMenu(); // Function prototype for displaying the menu and getting user's choice
void executeChoice(int choice); // Function prototype for executing the user's choice
void splitDouble(); // Function prototype for program related to splitting a double
void minutesHoursDays(); // Function prototype for program related to converting seconds to minutes, hours, and days
void caloriesBurned(); // Function prototype for program related to calculating calories burned

int main()
{
    int choice;

    // Main loop to display menu and execute chosen program until the user chooses to quit
    do
    {
        choice = displayMenu(); // Display the menu and get user's choice
        if (choice > 0 && choice < 5) // If the choice is valid
        {
            executeChoice(choice); // Execute the chosen program
        }

        else if (choice != -1) // If the choice is invalid (not -1)
        {
            printf("Invalid choice. Please enter a valid menu option.\n\n"); // Display error message
        }
    }

    while (choice != -1); // Repeat until user chooses to quit

    printf("Good bye!\n"); // Display exit message
    printf("\n"); // Blank Line
    return 0;
}

// Function to display the menu and get user's choice
int displayMenu()
{
    int choice;

    printf("Progs 2, 3, 4 Menu\n");
    printf("------------------------\n");
    printf("2 - Split Double\n");
    printf("3 - Minutes, Hours, Days\n");
    printf("4 - Calories Burned\n");
    printf("\n");   // Blank Line
    printf("Enter a choice (-1 to quit): ");
    scanf("%d", &choice); // Get user's choice
    printf("\n"); // Blank Line

    return choice; // Return user's choice
}

// Function to execute the chosen program based on user's choice
void executeChoice(int choice)
{
    switch (choice)
    {
    case 2:
        splitDouble(); // Execute program related to splitting a double
        break;
    case 3:
        minutesHoursDays(); // Execute program related to converting seconds to minutes, hours, and days
        break;
    case 4:
        caloriesBurned(); // Execute program related to calculating calories burned
        break;
    }
}

// Function implementing the program related to splitting a double
void splitDouble()
{
    double number;

    printf("Enter a number that includes a decimal point: ");
    scanf("%lf", &number); // Get user's input

    printf("The integer part of %.6lf is %d.\n", number, (int)number); // Display integer part of the number
    printf("The decimal part of %.6lf is %.6lf.\n\n", number, number - (int)number); // Display decimal part of the number
}

// Function implementing the program related to converting seconds to minutes, hours, and days
void minutesHoursDays()
{
    int seconds;

    printf("Enter the number of seconds: ");
    scanf("%d", &seconds); // Get user's input

    if (seconds <= 0) // If input is invalid (not positive)
    {
        printf("Invalid input. Number of seconds must be greater than 0.\n\n"); // Display error message
        return;
    }

    double minutes = seconds / 60.0; // Convert seconds to minutes
    double hours = minutes / 60.0; // Convert minutes to hours
    double days = hours / 24.0; // Convert hours to days

    printf("The number of seconds you entered, %d, is %.2lf minutes.\n", seconds, minutes); // Display minutes
    printf("The number of seconds you entered, %d, is %.2lf hours.\n\n", seconds, hours); // Display hours
}

// Function implementing the program related to calculating calories burned
void caloriesBurned()
{
    printf("You burn 3.9 calories every minute you run.\n");
    printf("This shows how many calories you burn if you ran for 5 to 20 minutes.\n\n");

    printf("        Minutes Calories\n");

    printf("Using a while loop\n");
    for (int i = 5; i <= 20; i += 3) // Loop from 5 to 20 minutes
    {
        printf("%12d %8.2f\n", i, 3.9 * i); // Display minutes and corresponding calories burned
    }
    printf("\n"); // Blank Line

    printf("Using a do-while loop\n");
    int i = 5;
    do
    {
        printf("%12d %8.2f\n", i, 3.9 * i); // Display minutes and corresponding calories burned
        i += 3;
    } while (i <= 20);
    printf("\n"); // Blank Line

    printf("Using a for loop\n");
    for (int i = 5; i <= 20; i += 3) // Loop from 5 to 20 minutes
    {
        printf("%12d %8.2f\n", i, 3.9 * i); // Display minutes and corresponding calories burned
    }
    printf("\n"); // Blank Line
}
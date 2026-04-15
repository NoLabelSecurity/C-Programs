// Programmer:		Brian Lorick
// Date:			01/31/2024
// Program Name:	Random Numbers
// Chapter:			Chapter 2 - Fundamentals
// Description:		This program prompts the user for their first and last name which it displays to the user.
//					After displaying the users input the program generates a pseudo-random number and a ture random number and displays both.

#define _CRT_SECURE_NO_WARNINGS // Disable warnings (and errors) when using non-secure versions of printf, scanf, strcpy, etc.
#include <stdio.h> // Needed for working with printf and scanf
#include <stdlib.h>
#include <time.h>

int main(void) {
    char firstName[20];
    char lastName[20];
    int pseudoRandom = 0;
    int trueRandom = 0;

    // Input
    printf("Enter your first name: ");  // Prompts the user for their first name
    scanf("%19s", firstName);           // Input for First name allowing MAX of 19 characters in string

    printf("Enter your last name: ");   // Prompts the user for their last name
    scanf("%19s", lastName);            // Input for Last name allowing MAX of 19 characters in string

    printf("\n"); //Blank Line

    // Processing
    pseudoRandom = rand() + 1;  // Provides a pseudo-random number (particualrly (42))
    srand(time(NULL));
    trueRandom = rand() % 100 + 1;  // Provides a true random number

    // Output
    printf("%s %s - here are the random numbers:\n", firstName, lastName);  // Displays user input first and last name

    printf("pseudo-random\t'true' random\n");   // Displays pseudo-random (tab) 'true' random

    printf("%d\t\t%d\n", pseudoRandom, trueRandom);// Outputs a pseudo-random (42), two tabs, then a 'true' random number
    
    printf("\n"); //Blank Line

    return 0;
} // end main()
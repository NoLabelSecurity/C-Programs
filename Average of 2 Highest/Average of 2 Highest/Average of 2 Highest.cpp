// Programmer:        Brian Lorick
// Date:              02/15/2024
// Program Name:      Average of 2 Highest
// Chapter:           Chapter 3 - Decisions
// Description:       Program will prompt the user for 3 Integer values and validates that the values are not 0.
//                    Program determines the highest of the values entered then calculates and displays the average.


#include <stdio.h>

int main(void) {

    // Constant Variable Declarations
    const int VALIDATION_LIMIT = 0; // Constant for validation limit

    int numOne = 0;             // First integer input value.
    int numTwo = 0;             // Second integer input value.
    int numThree = 0;           // Third integer input value.
    int highestOne = 0;         // First highest integer value.
    int highestTwo = 0;         // Second highest integer value.

    double highAverage = 0.0;   // Stores the average value of the two highest numbers.


    /* INPUT/PROCESSING */

    // Prompt user for three integer values and validate.
    printf("Enter the 1st non-zero positive number: ");
    scanf("%d", &numOne);

    // Validate the first number inputted by the user
    if (numOne <= VALIDATION_LIMIT)
    {
        printf("The 1st number, %d, was not a non-zero positive number.\n", numOne); // Error Message: Invalid Input.
        return 0; // END - Invalid Input.
    }

    // Prompt user for the second integer value and validate
    printf("Enter the 2nd non-zero positive number: ");
    scanf("%d", &numTwo);

    // Validate the second number inputted by the user
    if (numTwo <= VALIDATION_LIMIT)
    {
        printf("The 2nd number, %d, was not a non-zero positive number.\n", numTwo);
        return 0;
    }

    // Prompt user for the third integer value and validate
    printf("Enter the 3rd non-zero positive number: ");
    scanf("%d", &numThree);
    printf("\n");

    // Validate the third number inputted by the user
    if (numThree <= VALIDATION_LIMIT)
    {
        printf("The 3rd number, %d, was not a non-zero positive number.\n", numThree);
        return 0;
    }

    // Determine the two highest numbers
    if (numOne >= numTwo && numOne >= numThree)
    {
        highestOne = numOne;
        if (numTwo >= numThree) // If numTwo is greater than or equal to numThree,
        {
            highestTwo = numTwo; // assign numTwo as second highest.
        }
        else
        {
            highestTwo = numThree; // Otherwise, assign numThree as second highest.
        }
    }

    // If numTwo is the highest
    else if (numTwo >= numOne && numTwo >= numThree)
    {
        highestOne = numTwo;
        if (numOne >= numThree) // If numOne is greater than or equal to numThree,
        {
            highestTwo = numOne; // assign numOne as second highest.
        }
        else
        {
            highestTwo = numThree; // Otherwise, assign numThree as second highest.
        }
    }

    // If numThree is the highest
    else
    {
        highestOne = numThree;
        if (numOne >= numTwo) // If numOne is greater than or equal to numTwo,
        {
            highestTwo = numOne; // assign numOne as second highest.
        }
        else
        {
            highestTwo = numTwo; // Otherwise, assign numTwo as second highest.
        }
    }

    // Calculate the average of the two highest numbers
    highAverage = (highestOne + (double)highestTwo) / 2; // Determine Average of 2 highest numbers - typecast to double for decimal value.

    /* OUTPUT */
    // Display highest numbers and their average.
    printf("The average of the 2 highest numbers\n");

    // Print the two highest numbers in the correct order
    if (highestOne > highestTwo)
    {
        printf("(%d and %d) is: %.2lf.\n", highestOne, highestTwo, highAverage);
    }

    else
    {
        printf("(%d and %d) is: %.2lf.\n", highestTwo, highestOne, highAverage);
    }

    return 0;
} // end main()


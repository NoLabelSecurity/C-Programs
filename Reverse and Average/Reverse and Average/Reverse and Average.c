// Programmer:     Brian Lorick
// Date:           03/08/2024
// Program Name:   Reverse and Average
// Chapter:        Chapter 5 - Arrays
// Description:    Program reverses an array from user-provided values and calculates averages between
//                 corresponding elements in the original and reversed arrays. Program then displays all arrays.

#define _CRT_SECURE_NO_WARNINGS // Disable warnings (and errors) when using non-secure versions of printf, scanf, strcpy, etc.
#include <stdio.h> // Needed for working with printf and scanf.

int main(void) {

    // Variable Declarations
    int originalArray[10];  // Array to hold original user-provided values.
    int reverseArray[10]; // Array to hold reversed values of originalArray.
    int averageArray[10]; // Array to hold averages between corresponding elements of originalArray and reverseArray.
    int i; // Loop variable.

    // Input - Prompts to enter 10 values.
    for (i = 0; i < 10; i++) // Loop to get 10 integer values from the user.
    {
        printf("Enter value #%d: ", i + 1); // Prompt for each value.
        scanf("%d", &originalArray[i]); // Store user input into originalArray.
    }


    // Processing - Reversing the array and calculating averages.
    for (i = 0; i < 10; i++) // Loop to reverse originalArray and calculate averages.
    {
        reverseArray[i] = originalArray[9 - i]; // Reverse the array by assigning values from originalArray in reverse order.
        averageArray[i] = (originalArray[i] + reverseArray[i]) * 5; // Calculate average by summing corresponding elements and multiplying by 5.
    }


    // Output - Displaying all three arrays
    printf("\nThe original array...\n");
    for (i = 0; i < 10; i++) // Loop to display originalArray.
    {
        printf("%d\t", originalArray[i]); // Print each element of originalArray values separated by tabs.
    }

    printf("\nThe reverse array...\n");
    for (i = 0; i < 10; i++) // Loop to display reverseArray.
    {
        printf("%d\t", reverseArray[i]); // Print each element of reverseArray values separated by tabs.
    }

    printf("\nThe average array...\n");
    for (i = 0; i < 10; i++) // Loop to display averageArray.
    {
        printf("%.1f\t", averageArray[i] / 10.0); // Print each element of averageArray separated by tabs after converting to decimal values.
    }

    printf("\n\n"); // Blank Line

    return 0;
} // end main()

// Programmer:		Brian Lorick & Roger Harper
// Date:            01/29/2024
// Program Name:	Split Double
// Chapter:			Chapter 2 - Fundamentals  
// Description:		This program gets the users input decimal and splits it. 
//                  The program outputs the numbers on the right and left of the decimal.


#define _CRT_SECURE_NO_WARNINGS // Disable warnings (and errors) when using non-secure versions of printf, scanf, strcpy, etc.
#include <stdio.h> // Needed for working with printf and scanf

int main(void)
{
	// Constant and Variable declartion
	double userNumber = 0.0;	// User input
	int userInteger = 0;		// User input typecast as integer
	double userDecimal = 0.0;	// remaining decimal point of user input


	// *** INPUT ***
	printf("Enter a number that includes a decimal point: ");	// Prompts user for number with a decimal value
	scanf("%lf", &userNumber);									// Gets the user's input


	// *** PROCESSING ***
	userInteger = (int)userNumber;              // Typecast user input to an integer
	userDecimal = userNumber - userInteger;     // Subtracts integer from users input so only the decimal value remains


	// *** OUTPUT ***
	printf("The integer part of %lf is %d." "\n", userNumber, userInteger);	// Program outputs integer
	printf("The decimal part of %lf is %lf.\n", userNumber, userDecimal);	// Program outputs decimal
	printf("\n");

	return 0;

} // end main()
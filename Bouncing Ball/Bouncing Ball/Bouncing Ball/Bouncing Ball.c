// Programmer:		Tyler Goss & Brian Lorick
// Date:			2/27/2024
// Program Name:	Bouncing Ball
// Chapter:			Chapter 4 - Repetition
// Description:		The program will prompt the user for the initial height of the ball (in feet) and the coefficient of restitution of the ball.
//					Then the program will display how many times the ball will bounce, using a loop that runs until the ball's bounce-up height is less than 1 inch.

#define _CRT_SECURE_NO_WARNINGS // Disable warnings (and errors) when using non-secure versions of printf, scanf, strcpy, etc.
#include <stdio.h> // Required for printf and scanf
#include <math.h> // Required for fabs()

int main(void)
{
	// VARIABLE DECLARATIONS
	double const MIN_INITIAL_HEIGHT = 0.0; // Minimum initial height allowed for the ball
	double const MIN_RESTITUTION = 0.0; // Minimum coefficient of restitution allowed for the ball
	double const MAX_RESTITUTION = 1.0; // Maximum coefficient of restitution allowed for the ball
	double const INCH = 0.083; // Value of one inch in feet
	double initialHeight = 0.0; // Variable to store the initial height of the ball
	double restitution = 0.0; // Variable to store the coefficient of restitution of the ball
	int bounces = 0; // Variable to count the number of bounces

	// INPUT
	printf("Enter the initial height of the ball (in feet): "); // Prompt user for initial height
	scanf("%lf", &initialHeight); // Read initial height from user

	if (initialHeight < MIN_INITIAL_HEIGHT) // Validate if initial height is within acceptable range
	{
		while (initialHeight < MIN_INITIAL_HEIGHT) // Display error message until valid input is provided
		{
			printf("   The initial height of the ball must be greater than or equal to 0.0.\n");
			printf("   Please re-enter the initial height of the ball (in feet): ");
			scanf("%lf", &initialHeight);
		}
	}

	printf("Enter the ball's coefficient of restitution (0.0 to 1.0 inclusive): "); // Prompt user for coefficient of restitution.
	scanf("%lf", &restitution); // Read coefficient of restitution from user.

	if (restitution < MIN_RESTITUTION || restitution > MAX_RESTITUTION) // Validate if coefficient of restitution is within acceptable range.
	{
		while (restitution < MIN_RESTITUTION || restitution > MAX_RESTITUTION) // Display error message until valid input is provided.
		{
			printf("   The coefficient of restitution must be between 0.0 and 1.0 inclusive.\n"); // Error Message.
			printf("   Please re-enter the ball's coefficient of restitution (0.0 to 1.0 inclusive): "); // Error Message Prompt to re-enter.
			scanf("%lf", &restitution);
		}
	}

	if (fabs(restitution - MAX_RESTITUTION) < 0.00001) // Check if coefficient of restitution equals maximum value.
	{
		printf("\nWith a coefficient of restitution equal to 1.0, the ball will bounce forever!"); // Inform user that the ball will bounce indefinitely.
	}

	if (initialHeight < INCH || fabs(restitution - MIN_RESTITUTION) < 0.00001) // Check if initial height is less than 1 inch or if restitution is 0.
	{
		printf("\nThe ball bounced %d times.\n\n", bounces); // Display number of bounces.
	}

	else
	{
		while (initialHeight > INCH) // Calculate the number of bounces until bounce-up height is less than 1 inch.
		{
			bounces++; // Increment bounce count.
			initialHeight = initialHeight * restitution; // Calculate bounce-up height.
		}

		if (bounces == 1) // Check if only one bounce occurred.
		{
			printf("\nThe ball bounced %d time.\n\n", bounces); // Display singular form of "time".
		}

		else // If more than one bounce occurred.
		{
			printf("\nThe ball bounced %d times.\n\n", bounces); // Display plural form of "times".
		}
	}

	return 0;
} // end main()
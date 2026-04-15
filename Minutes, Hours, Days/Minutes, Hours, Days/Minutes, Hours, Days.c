// Programmer:		Brian Lorick
// Date:			2/09/2024
// Program Name:	Minutes, Hours, Days  
// Chapter:			Chapter 3 - Decisions  
// Description:		Program prompts user to enter numerical number in seconds. The program then executes
//					converting Seconds to Minutes, Seconds to Hours, Seconds to Days.

#define _CRT_SECURE_NO_WARNINGS // Disable warnings (and errors) when using non-secure versions of printf, scanf, strcpy, etc.
#include <stdio.h> // Needed for printf() and scanf()

int main(void)
{
	// Constant and Variable Declarations
	long int numSec = 0;            // Long float integer variable to store numerical user input in seconds

	const int SEC_PER_MIN = 60;     // Constant integer variable for Seconds per Minute
	const int SEC_PER_HOUR = 3600;  // Constant integer variable for Seconds per Hour
	const int SEC_PER_DAY = 86400;  // Constant integer variable for Seconds per Day
	
	
	// ***INPUT***
	printf("Enter the number of seconds: ");    // Prompt user for numerical input in seconds 
	scanf("%ld", &numSec);  // Reads input as a long integer and stores value in 'numSec' variable
	
	
	// ***PROCESSING and OUTPUT***
    if (numSec > 0)  /* If the input value is greater than 0 code executes if statements in brackets{}. 
                        Else the ERROR HANDLING code will execute. */
    {
        printf("\n"); // Blank Line

        // Converts users input amount of seconds to MINUTES and then displays users input and the resulting conversion value
        if (numSec >= SEC_PER_MIN)
        {
            printf("The number of seconds you entered, %ld, is %.2lf minutes.\n", numSec, (numSec * 1.0) / SEC_PER_MIN);
        }
        
        // Converts users input amount of seconds to HOURS and then displays users input and the resulting conversion value
        if (numSec >= SEC_PER_HOUR)
        {
            printf("The number of seconds you entered, %ld, is %.2lf hours.\n", numSec, (numSec * 1.0) / SEC_PER_HOUR);
        }
        
        // Converts users input amount of seconds to DAYS and then displays users input and the resulting conversion value
        if (numSec >= SEC_PER_DAY)
        {
            printf("The number of seconds you entered, %ld, is %.2lf days.\n", numSec, (numSec * 1.0) / SEC_PER_DAY);
        }
	    printf("\n"); // Blank Line
    }
    
    // ***ERROR HANDLE***
    else        
    {
        // User input a numerical value less than 1.
        printf("The number of seconds entered must be greater than 0.\n");
        printf("\n"); // Blank Line
    }
    
	return 0;
}   // end main()
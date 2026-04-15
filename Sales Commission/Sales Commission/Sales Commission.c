// Programmer:      Brian Lorick
// Date:            2/28/2024
// Program Name:    Sales Commission
// Chapter:         Chapter #4 - Repetition
// Description:     The program calculates a salesperson's weekly salary based on sales amount and commission rate.
//                  It utilizes both pre-test and post-test sentinel-controlled loops.

#define _CRT_SECURE_NO_WARNINGS // Disables warnings (and errors) when using non-secure versions of printf, scanf, strcpy, etc.
#include <stdio.h> // Required for working with printf and scanf

int main(void)
{
    // Variable Declarations
    const double BASE_SALARY = 200.00;      // Define base salary constant
    const double COMMISSION_RATE = 0.09;    // Define commission rate constant
    const double SENTINEL_VALUE = 0.0;      // Define sentinel value constant
    double totalSales = 0.0;                // Initialize total sales accumulator
    double salesInput = 0.0;                // Initialize variable for individual sales input
    double weeklySalary = 0.0;              // Initialize variable for weekly salary calculation
    int numCount = 0;                       // Initialize counter for number of sales entered

    //*** Pre-test (while) loop ***
    printf("*** Using a pre-test (while) loop ****************************\n");
    printf("***  This requires the initial prompt and get before the loop,\n");
    printf("***  the processing (and output) at the top of the loop,\n");
    printf("***  and a re-prompt (and re-get) at the bottom of the loop,\n");
    printf("***  (but it doesn't require a decision inside the loop).\n");
    printf("***************************************************************\n\n");

    // Input and processing for pre-test loop.
    printf("Enter the amount of sales (negative to quit): $"); // Prompt user for input.
    scanf("%lf", &salesInput); // Read input from user.

    while (salesInput >= SENTINEL_VALUE) // Loop while input is not negative (sentinel-controlled loop).
    {
        totalSales += salesInput; // Accumulate total sales.
        numCount++; // Increment counter for number of sales.
        weeklySalary = BASE_SALARY + (totalSales * COMMISSION_RATE); // Calculate weekly salary.
        printf("The person receives $%.2lf.\n\n", weeklySalary); // Output weekly salary.

        printf("Enter the amount of sales (negative to quit): $"); // Prompt user for next input.
        scanf("%lf", &salesInput); // Read next input from user.
    }

    // Output total and average after pre-test loop ends.
    printf("\nThe total of the sales was $%.2lf.\n", totalSales); // Output total sales.

    if (numCount > 0) // Check if any sales were entered.
        printf("The average sales was $%.2lf.\n\n", totalSales / numCount); // Output average sales if sales were entered.

    else
        printf("No sales were entered.\n\n"); // Output if no sales were entered.
    printf("\n"); // Blank Line



// Reset variables for post-test (do...while) loop.
    totalSales = 0.0; // Reset total sales accumulator.
    numCount = 0; // Reset counter for number of sales entered.

    // *** Post-test (do...while) loop ***
    printf("*** Using a post-test (do...while) loop ************************\n");
    printf("***  This requires the prompt and get at the top of the loop,\n");
    printf("***  and then a decision to see if the process (and output)\n");
    printf("***  should be done\n");
    printf("***  (but the prompt (and get) is only written once).\n");
    printf("***************************************************************\n\n");

    // Input and processing for post-test loop.
    do
    {
        printf("Enter the amount of sales (negative to quit): $"); // Prompt user for input.
        scanf("%lf", &salesInput); // Read input from user.

        if (salesInput >= SENTINEL_VALUE) // Check if input is not negative.
        {
            totalSales += salesInput; // Accumulate total sales.
            numCount++; // Increment counter for number of sales.
            weeklySalary = BASE_SALARY + (totalSales * COMMISSION_RATE); // Calculate weekly salary.
            printf("The person receives $%.2lf.\n\n", weeklySalary); // Output weekly salary.
        }
    }

    while (salesInput >= SENTINEL_VALUE); // Loop while input is not negative.

    // Output total and average after post-test loop ends.
    printf("\nThe total of the sales was $%.2lf.\n", totalSales); // Output total sales.

    if (numCount > 0) // Check if any sales were entered.
        printf("The average sales was $%.2lf.\n\n", totalSales / numCount); // Output average sales if sales were entered.

    else
        printf("No sales were entered.\n\n"); // Output if no sales were entered.
    printf("\n"); // Blank Line

    return 0; // Indicate successful completion of program.
} // end main()


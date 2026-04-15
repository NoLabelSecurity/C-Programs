// Programmer:      Brian Lorick
// Date:            02/13/2024
// Program Name:    Shipping Charges
// Chapter:         Chapter #3 - Decisions
// Description:     Program determines the charges to ship a package by asking the user for the package weight.
//                  Program displays the package weight and shipping charge OR returns an error message.


#define _CRT_SECURE_NO_WARNINGS // Disable warnings (and errors) when using non-secure versions of printf, scanf, strcpy, etc.
#include <stdio.h> // Needed for working with printf and scanf

int main(void)
{
    // Constant and Variable Declarations
    const double WEIGHT_2LB = 2.0;      // Weight cutoff at 2 pounds
    const double WEIGHT_6LB = 6.0;      // Weight cutoff at 6 pounds
    const double WEIGHT_10LB = 10.0;    // Weight cutoff at 10 pounds

    const double WEIGHT_MIN = 0.0;      // Minimum allowed weight

    const double CHARGE_2LB = 1.25;     // Shipping charge for packages up to 2 pounds
    const double CHARGE_6LB = 2.50;     // Shipping charge for packages over 2 pounds but not more than 6 pounds
    const double CHARGE_10LB = 3.90;    // Shipping charge for packages over 6 pounds but not more than 10 pounds

    const double CHARGE_OVER_10LB = 4.40; // Shipping charge for packages over 10 pounds

    double shippingCharge = 0.0;        // Stores the calculated shipping charge
    double packageWeight = 0.0;         // Stores the weight of the package


    /* INPUT */
    printf("Enter the weight of the package: "); // Prompt user to enter the weight of the package.
    scanf("%lf", &packageWeight); // Stores value in packageWeight variable.

    // Validation: 
    if (packageWeight <= WEIGHT_MIN) // Validate that the weight of the package greater than 0.0 pounds,
    {
        printf("The weight of the package must be greater than 0.00.\n"); // if not, inform the user,
        printf("\n"); // Blank Line
        return 1; // and exit the program.
    }


    /* PROCESSING */

    // Determine the shipping charge based on the weight of the package.
    if (packageWeight <= WEIGHT_2LB)        // If the weight is 2 pounds or less,
    {
        shippingCharge = CHARGE_2LB;        // assign the shipping charge accordingly.
    }

    else if (packageWeight <= WEIGHT_6LB)   // If the weight is over 2 pounds but not more than 6 pounds,
    {
        shippingCharge = CHARGE_6LB;        // assign the shipping charge accordingly.
    }

    else if (packageWeight <= WEIGHT_10LB)  // If the weight is over 6 pounds but not more than 10 pounds,
    {
        shippingCharge = CHARGE_10LB;       // assign the shipping charge accordingly.
    }

    else
    {
        shippingCharge = CHARGE_OVER_10LB;  // If the weight is over 10 pounds, assign the shipping charge accordingly.
    }


    /* OUTPUT */

    printf("\n"); // Blank Line

    printf("The shipping charge is $%.2f.\n", shippingCharge);  // Display the calculated shipping charge to the user.

    printf("\n"); // Blank Line

    return 0; // Exit the program with success.
}
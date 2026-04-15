// Programmer:		Brian Lorick
// Date:			01/30/2024
// Program Name:	How Many
// Chapter:			Chapter 2 - Fundamentals  
// Description:		The program will display the prices of the menu items. The program then
//					prompts the user for the amount of money they have. It then displays options
//                  and the amount of each item the user can afford to buy.

#define _CRT_SECURE_NO_WARNINGS // Disable warnings (and errors) when using non-secure versions of printf, scanf, strcpy, etc.
#include <stdio.h> // Needed for working with printf and scanf

int main(void)
{
	// Constant and Variable Declarations
	int hotDogNum = 0;
	int chickenSandwichNum = 0;
	int hamburgerNum = 0;

	double moneyAmount = 0.0;

	const double HOTDOG_PRICE = 1.50;
	const double CHICKENSANDWICH_PRICE = 2.75;
	const double HAMBURGER_PRICE = 3.00;

	// *** Your program goes here ***

	// Displays Menu to user
	printf("        Fast Food" "\n");
	printf("-------------------------" "\n");
	printf("Hot Dog w/ Chili....$%.2lf" "\n", HOTDOG_PRICE);
	printf("Hamburger...........$%.2lf" "\n", HAMBURGER_PRICE);
	printf("Chicken Sandwich....$%.2lf" "\n", CHICKENSANDWICH_PRICE);

	printf("" "\n"); //blank line


	// ***INPUT***
	printf("How much money do you have? $"); // Prompts the user for the amount of money they have
	scanf("%lf", &moneyAmount);

	printf("\n"); //blank line


	// ***PROCESS***
	hotDogNum = moneyAmount / HOTDOG_PRICE; // Calculates the amount of Hotdogs you can purchase
	hamburgerNum = moneyAmount / HAMBURGER_PRICE; // Calculates the amount of Hamburgers you can purchase
	chickenSandwichNum = moneyAmount / CHICKENSANDWICH_PRICE; // Calculates the amount of Chicken sandwiches you can purchase

	// ***OUTPUT***
	printf("With $%.2lf, you could buy" "\n", moneyAmount);
	printf("  %d Hot Dogs w/ Chili, or" "\n", hotDogNum);
	printf("  %d Hamburgers, or" "\n", hamburgerNum);
	printf("  %d Chicken Sandwiches" "\n", chickenSandwichNum); // The program will output the max amount of the item you can buy

	printf("\n"); //blank line

	return 0;
} // end main()
// Programmer:		Brian Lorick
// Date:			1/25/2024
// Program Name:	Stock Price
// Chapter:			Chapter 2 - Fundamentals
// Description:		The program will first ask the user how many stocks they want and the $ amount for them.
//					The program then calculates the amount of money needed to purchase the stocks.

#define _CRT_SECURE_NO_WARNINGS // Disable warnings (and errors) when using non-secure versions of printf, scanf, strcpy, etc.
#include <stdio.h> // Needed for working with printf and scanf

int main(void)
{
	// Constant and Variable Declarations
	int stockShares = 0;
	double shareAmount = 0.0;
	double purchasePrice = 0.0;

	// *** INPUT *** 
	printf("Enter the number of shares of stock: "); // The user inputs the shares of stock
	scanf("%d", &stockShares);

	printf("Enter the dollar amount per share: $"); // The user enters the $ amount per share
	scanf("%lf", &shareAmount);


	// *** PROCESS ***
	purchasePrice = stockShares * shareAmount; // The program calcutlates the purchase price by mulitipying the shares and stock amounts
	printf("\n");


	// *** OUTPUT ***
	// The program will output the amount needed to purchase the shares
	printf("The amount of money needed to purchase %d shares of stock\n", stockShares);
	printf("at $%.2lf is $%.2lf.\n", shareAmount, purchasePrice);

	printf("\n"); // Blank Line

	return 0;
} // end main()



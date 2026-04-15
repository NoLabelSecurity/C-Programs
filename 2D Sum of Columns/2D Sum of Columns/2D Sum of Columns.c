// Programmer:     Brian Lorick
// Date:           03/14/2024
// Program Name:   2D Sum of Columns
// Chapter:        Chapter 5 - Arrays
// Description:    Program populates a 2-dimensional array with numbers from 1 to 100 and displays the array.
//                 It then calculates and displays the sum of the numbers in the 4th and 9th columns.

#include <stdio.h>

int main(void) {

    // Variable Declarations
    int array[10][10];     // Declare a 2D array with dimensions 10x10
    int row;               // Declare a variable for iterating over rows
    int col;               // Declare a variable for iterating over columns
    int sumFourthCol = 0;  // Initialize a variable to store the sum of the 4th column
    int sumNinethCol = 0;  // Initialize a variable to store the sum of the 9th column


    // Populate the array using nested loops
    int count = 1; // Initialize a counter starting from 1
    for (row = 0; row < 10; row++) // Loop over rows
    {
        for (col = 0; col < 10; col++) // Loop over columns
        {
            array[row][col] = count++; // Assign current count value to array element and increment count
        }
    }


    // Display the array
    printf("The contents of a 2-dimensional array, populated with the values 1 to 100...\n");
    for (row = 0; row < 10; row++) // Loop over rows
    {
        for (col = 0; col < 10; col++) // Loop over columns
        {
            printf("%d\t", array[row][col]); // Print array element followed by a tab
        }
        printf("\n"); // Move to the next row after printing all columns
    }


    // Calculate the sum of the 4th column
    for (row = 0; row < 10; row++) // Loop over rows
    {
        sumFourthCol += array[row][3]; // Add the value of the current row's element in the 4th column to the sum
    }


    // Calculate the sum of the 9th column
    for (row = 0; row < 10; row++) // Loop over rows
    {
        sumNinethCol += array[row][8]; // Add the value of the current row's element in the 9th column to the sum
    }


    // Display the sums
    printf("\nThe sum of the 4th column is %d.\n", sumFourthCol); // Print the sum of the 4th column
    printf("The sum of the 9th column is %d.\n", sumNinethCol);   // Print the sum of the 9th column
    printf("\n"); // Blank Line

    return 0;
} // end main()
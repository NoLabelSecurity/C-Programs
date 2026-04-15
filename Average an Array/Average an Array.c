// Programmer:        Brian Lorick
// Date:              04/08/2024
// Program Name:      Average an Array
// Chapter:           Chapter 6 - Functions
// Description:       This program calculates the average of values stored in an array. 
//                    It utilizes three functions for input, processing, and output of the data.

#define _CRT_SECURE_NO_WARNINGS // Disable warnings (and errors) when using non-secure versions of printf, scanf, strcpy, etc.
#include <stdio.h> // Needed for working with printf and scanf

// Function prototypes
void inputValues(double array[], int size); // Prototype for the function to input values into the array
double calculateAverage(double array[], int size); // Prototype for the function to calculate the average of the values in the array
void displayAverage(double average); // Prototype for the function to display the average

int main()
{
    // Define an array of size 10
    double values[10];

    // Call input function to populate the array
    inputValues(values, 10);

    // Call processing function to calculate the average
    double average = calculateAverage(values, 10);

    // Call output function to display the average
    displayAverage(average);

    return 0;
}

// Function to input values into the array
void inputValues(double array[], int size)
{
//    printf("Enter 10 values:\n"); // Prompt the user to enter 10 values
    for (int i = 0; i < size; i++) // Iterate over each element of the array
    {
        printf("Enter a value for #%d: ", i + 1); // Prompt user to enter a value for the current element
        scanf("%lf", &array[i]); // Read value entered by the user and store it in the current element of the array
    }
}

// Function to calculate the average of the values in the array
double calculateAverage(double array[], int size)
{
    double sum = 0.0; // Initialize variable to store the sum of the values
    for (int i = 0; i < size; i++) // Iterate over each element of the array
    {
        sum += array[i]; // Add the current element to the sum
    }
    return sum / size; // Return the average of the values
}

// Function to display the average
void displayAverage(double average)
{
    printf("\nThe average of the values is %.2lf.\n", average); // Display the calculated average
    printf("\n"); // Blank Line
}
// Programmer:     Brian Lorick
// Date:           03/24/2024
// Program Name:   Bubble Sort
// Chapter:        Chapter 5 - Arrays
// Description:    This program sorts an array of 10 double values using the bubble sort algorithm.
//                 It prompts user for input for the array and displays the unsorted and sorted arrays accordingly.

#include <stdio.h>

// Function to perform bubble sort
void bubbleSort(double arr[], int n) // Define a function named bubbleSort that takes an array of double values and its size as input parameters.
{
    // Outer loop for the number of passes in bubble sort.
    for (int i = 0; i < n - 1; i++) // Initialize a loop to iterate through the array for each pass, excluding the last element.
    {
        // Inner loop for comparing adjacent elements and swapping if necessary.
        for (int j = 0; j < n - 1 - i; j++) // Initialize a loop to compare adjacent elements, excluding the elements already sorted.
        {
            // If the current element is greater than the next element, swap them.
            if (arr[j] > arr[j + 1]) // Check if the current element is greater than the next element.
            {
                // Swap the elements
                double temp = arr[j]; // Store the value of the current element in a temporary variable.
                arr[j] = arr[j + 1]; // Assign the value of the next element to the current element.
                arr[j + 1] = temp; // Assign the value stored in the temporary variable to the next element.
            }
        }
    }
}

int main() {    /* Entry point program's execution. The function definition for bubble sort (void bubbleSort(double arr[], int n))
                   is declared to be used by the main function later for sorting the array.*/

                   // Define the array size
    const int ARRAY_SIZE = 10; // Define a constant integer variable named ARRAY_SIZE and assign it the value 10.

    // Initialize an array to store user input
    double datavalues[ARRAY_SIZE]; // Declare an array of double values named datavalues with size ARRAY_SIZE.

    // Ask the user to enter values for the array
    for (int i = 0; i < ARRAY_SIZE; i++) // Initialize a loop to prompt the user to enter values for each element of the array.
    {
        printf("Enter a value for array element [%d]: ", i); // Print a message asking the user to enter a value for the current element.
        scanf("%lf", &datavalues[i]); // Read the value entered by the user and store it in the current element of the array.
    }

    // Display the unsorted array
    printf("\nThe un-sorted array:\n"); // Print a message indicating the display of the unsorted array.
    for (int i = 0; i < ARRAY_SIZE; i++) // Initialize a loop to print each element of the unsorted array.
    {
        printf("%.2f\n", datavalues[i]); // Print the value of the current element with two decimal places.
    }

    // Sort the array using bubble sort
    bubbleSort(datavalues, ARRAY_SIZE); // Call the bubbleSort function to sort the array.

    // Display the sorted array
    printf("\nThe sorted array:\n"); // Print a message indicating the display of the sorted array.
    for (int i = 0; i < ARRAY_SIZE; i++) // Initialize a loop to print each element of the sorted array.
    {
        printf("%.2f\n", datavalues[i]); // Print the value of the current element with two decimal places.
    }

    return 0; // End Main()
}

// Programmer:     Brian Lorick
// Date:           03/24/2024
// Program Name:   2D Rainfall
// Chapter:        Chapter 5 - Arrays
// Description:    The program calculates and displays rainfall data for 5 years. 
//                 This includes total rainfall for each year and average rainfall for each month.

#include <stdio.h>  

int main(void) {
    
    // Variable Declarations [Array(s)]
    double rainfall[5][12] =  // Declaration and initialization of a 2D array to store rainfall data for 5 years and 12 months each
    {                                                                              // Rainfall data for each month of the:
        {0.88, 1.11, 2.01, 3.64, 6.44, 5.58, 4.23, 4.34, 4.00, 2.05, 1.48, 0.77},  // First year
        {0.76, 0.94, 2.09, 3.29, 4.68, 3.52, 3.52, 4.82, 3.72, 2.21, 1.24, 0.80},  // Second year
        {0.67, 0.80, 1.75, 2.70, 4.01, 3.88, 3.72, 3.78, 3.55, 1.88, 1.21, 0.61},  // Third year
        {0.82, 0.80, 1.99, 3.05, 4.19, 4.44, 3.98, 4.57, 3.43, 2.32, 1.61, 0.75},  // Fourth year
        {0.72, 0.90, 1.71, 2.02, 2.33, 2.98, 2.65, 2.99, 2.55, 1.99, 1.05, 0.92}   // Fifth year
    };
    double yearlyTotal[5] = {0};  // Array to store total rainfall for each year
    double monthlyTotal[12] = {0};  // Array to store total rainfall for each month
    
    // Input: None
    
    // Processing: Calculate yearly total and monthly total
    for (int year = 0; year < 5; year++)  // Loop for each year
    {
        for (int month = 0; month < 12; month++)  // Loop for each month
        {
            yearlyTotal[year] += rainfall[year][month];  // Accumulate total rainfall for each year
            monthlyTotal[month] += rainfall[year][month];  // Accumulate total rainfall for each month
        }
    }
    
    // Output: Display rainfall table, total for each year, and average for each month
    printf("       Jan   Feb   Mar   Apr   May   Jun   Jul   Aug   Sep   Oct   Nov   Dec\n");  // Print header for the table
    
    for (int year = 0; year < 5; year++)  // Loop for each year
    {
        printf("201%d  ", year + 5);  // Print the year
        for (int month = 0; month < 12; month++)  // Loop for each month
        {
            printf("%.2f  ", rainfall[year][month]);  // Print rainfall data for each month
        }
        printf("\n");  // Move to the next line after printing each year's data
    }
    
    printf("\nTotal rainfall for each year:\n");  // Print header for total rainfall output
    
    for (int year = 0; year < 5; year++)  // Loop for each year
    {
        printf("201%d  %.2f\n", year + 5, yearlyTotal[year]);  // Print total rainfall for each year
    }
    
    printf("\nAverage rainfall for each month:\n");  // Print header for average rainfall output
    printf("  Jan   Feb   Mar   Apr   May   Jun   Jul   Aug   Sep   Oct   Nov   Dec\n");  // Print header for average rainfall per month
    
    for (int month = 0; month < 12; month++)  // Loop for each month
    {
        printf(" %.2f ", monthlyTotal[month] / 5);  // Print average rainfall for each month
    }
    
    printf("\n\n"); // Blank Line

    return 0;
} // End of main()

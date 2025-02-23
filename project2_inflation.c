//Khanh Tram Le
//UID: 28888200
//Description: This program helps to calculate the inflation /rate for 5 years from year 2025 to 2029.


#include <stdio.h>

int main(void)
{
    // Declare variables

    double anticipatedPrice , inflationRate = 0.03;

    // User inpurt
    printf("Enter the price of the item in 2024: ");
    scanf("%lf", &anticipatedPrice);
    
    //Calculate and print price for 2024
    for (int year = 2025; year <= 2029; year++){
        anticipatedPrice *= (1 + inflationRate);
        printf("The anticipated price in %d is %.2f\n", year, anticipatedPrice);
    }
    return 0;
}
   
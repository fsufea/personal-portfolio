/* "Car Parking Fee Calculator using Conditional Logic (if-else statements)."
This description highlights:
Car parking fee: The purpose of the program.
Calculator: The function of the program.
Conditional logic: Emphasizing that the program uses if-else statements for decision-making.
 */

#include <stdio.h>
int main()
{
	int cust, hours;
	float pay, total = 0.0; // Initialize total to 0
	printf("Welcome to Carpark\n");

	for (cust = 1; cust <= 10; cust++)
	{
		printf("Enter number of hours: ");
		scanf("%d", &hours);

		if (hours == 1)
			pay = 2.5;
		else
			pay = 2.5 + ((hours - 1) * 1.5);

		printf("You need to pay: RM%.2f\n", pay);
		total += pay;
	}

	// Calculate total and display it after the loop
	printf("Total for all customers: RM%.2f\n", total);

	// Use getchar() to wait for user input before exiting
	printf("Press Enter to continue...");
	getchar(); // To clear the previous newline in the input buffer
	getchar(); // Wait for Enter key

	return 0;
}

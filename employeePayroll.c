/* This program is designed to calculate the gross pay, deductions, and net pay for 
employees based on their weekly working hours. It processes multiple employees' information, 
calculates their pay details, and generates a salary slip with deductions like 
EPF (Employee Provident Fund) and employee union fees. The program also tracks the total 
number of employees processed and calculates the overall deductions and net pay for all employees.

Features:
Employee Identification: Employees are identified using a unique Employee ID, which must be between 1111 and 8888 (inclusive).
Pay Calculation:
Gross Pay is calculated based on the hours worked:
4.00 RM/hour for the first 40 hours.
6.00 RM/hour for hours between 40 and 50.
8.00 RM/hour for hours between 50 and 80.
Deductions include:
8% for general deductions.
10% for EPF (Employee Provident Fund).
A fixed union fee of 10.00 RM.
Net Pay is calculated by subtracting deductions from the gross pay.
Salary Slip: The program generates a formatted salary slip for each employee, displaying the gross pay, deductions, and net pay.
Tracking Totals:
The total number of employees processed.
The total amount of deductions.
The total net pay of all employees processed.
User Interaction: The user can choose to continue entering data for additional employees or exit the program.
Input Validation: Ensures that the Employee ID is within a valid range and prompts for re-entry if invalid.*/

#include <stdio.h>
#define RATEFIRST40HOURS 4.00
#define RATEOVER40THROUGH50 6.00
#define RATEOVER50 8.00
#define EMPUNION 10.00

int main()
{
	int Id, hours, totalEmp, employee;
	float grossPay, deduction, netPay, tax, epf, totalDeduc, totalNet;
	char ans;
	totalDeduc = 0;
	totalNet = 0;
	employee = 0;

	do
	{
		printf("\nEnter Employee ID :");
		scanf("%d", &Id);

		while (Id <= 1111 || Id >= 8888)
		{
			printf("\nID is invalid! Please re-enter:");
			scanf("%d", &Id);
		}

		printf("\nEnter hours per week:");
		scanf("%d", &hours);

		if (hours == 40)
		{
			grossPay = RATEFIRST40HOURS * hours;
			printf("Gross pay is (RM)%.2f", grossPay);
		}
		else
		{
			if (hours > 40 && hours <= 50)
				grossPay = RATEOVER40THROUGH50 * hours;
			else if (hours > 50 && hours <= 80)
				grossPay = RATEOVER50 * hours;

			printf("ID Employee is :%d\nHours Per Week :%d \nGross pay is (RM)%.2f", Id, hours, grossPay);
		}

		deduction = (grossPay * 0.08);
		epf = (grossPay * 0.10);
		netPay = grossPay - deduction - epf - EMPUNION;
		totalEmp = ++employee;
		totalDeduc += deduction;
		totalNet += netPay;

		printf("\nDeduction is (RM)%.2f", deduction);
		printf("\nNet pay is (RM)%.2f", netPay);
		printf("\nTotal employee is %d", totalEmp);
		printf("\nTotal deduction is (RM)%.2f", totalDeduc);
		printf("\nTotal pay net is (RM)%.2f", totalNet);

		printf("\n\t\t\t\t\t\t Slip salary");
		printf("\n\t\t\t\t\tWawasan Resources Sdn. Bhd.\n");
		printf("\n\t_______________________________________________________________________________________");
		printf("\n\t\t\t\t\t Employee ID:%d ", Id);
		printf("\n\t_______________________________________________________________________________________");
		printf("\n\t\t\t\t\t GROSS PAY \t\t\tRM%.2f \n\t\t\t\t\t DEDUCTION \t\t\tRM%.2f \n\t\t\t\t\t NET PAY \t\t\tRM%.2f ", grossPay, deduction, netPay);
		printf("\n\t_______________________________________________________________________________________");

		ans = 'y';
		printf("\nDo you want to continue? (y/n) ");
		scanf(" %c", &ans);

	} while (ans == 'y' || ans == 'Y');

	printf("\nPress Enter to continue...");
	while (getchar() != '\n')
		;	   // Waits for Enter key
	getchar(); // Capture the Enter key

	return 0;
}

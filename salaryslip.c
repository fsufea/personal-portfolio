/* This program generates a salary slip for an employee. It prompts the user to enter 
their basic salary and calculates the components of the salary, including the Dearness 
Allowance (DA), House Rent Allowance (HRA), Medical Allowance (MA), Provident Fund (PF), 
and the net salary after deductions. The program outputs a formatted salary slip with 
these calculations, displaying the gross and net salary for the employee.*/

#include<stdio.h>

int main()
{
 float basic;
 printf("\n Enter Basic Salary :");
 scanf("%f",&basic);
 printf("\n===================================");
 printf("\n          SALARY SLIP");
 printf("\n===================================");
 printf("\n Basic : %.2f",basic);
 printf("\n DA    : %.2f",basic*0.10);
 printf("\n HRA   : %.2f",basic*0.075);
 printf("\n MA    : %.2f",300.00);
 printf("\n===================================");
 printf("\n GROSS : %.2f",basic+(basic*0.10)+(basic*0.075)+300.00);
 printf("\n===================================");
 printf("\n PF    : %.2f",basic*0.125);
 printf("\n===================================");
 printf("\n NET   : %.2f",(basic+(basic*0.10)+(basic*0.075)+300.00)-(basic*0.125));
 printf("\n===================================");
 return 0; 
}


/* "A simple C program that checks if a given number is odd, even, or zero. 
The program uses conditional logic (if-else statements) to determine and display the 
appropriate message based on the input number."*/
#include <stdio.h>
int main()
{
	int iNum;
	printf("Enter any number: ");
	scanf("%d", &iNum);

	if (iNum == 0)
	{
		printf("%d is neither odd nor even (it's zero)\n", iNum);
	}
	else if (iNum % 2 == 0)
	{
		printf("%d is an even number\n", iNum);
	}
	else
	{
		printf("%d is an odd number\n", iNum);
	}

	return 0;
}

/*This program simulates a language training center's course enrollment system. 
The user is prompted to choose from a list of available language courses. 
Upon selecting a course, the program will check if there is space in the class. 
If space is available, it displays the course fee, current class size, and updates 
the class size accordingly. If the class is full, the program notifies the user. 
The program supports case-insensitive course name input, handles buffer clearing 
to ensure clean input, and allows the user to continue checking other courses or 
exit the system.

Features:
Lists available courses: Mandarin, Malay, Korean, Quranic, and Japanese.
Allows the user to enter a course name (case-insensitive).
Checks if the class has space available:
If full, informs the user.
If not full, displays the fee, current class size, and updates the class size.
Asks if the user wants to continue checking more courses after each transaction.
Handles input buffer flushing to avoid incorrect readings when switching between inputs.*/

#include <stdio.h>
#include <string.h>

int main()
{
	printf("Welcome to Language Training Centre");

	char courseName[5][20] = {"Mandarin Language", "Malay Language", "Korean Language", "Quranic Language", "Japanese Language"};
	char course[20], ans;
	int fee[5] = {330, 125, 450, 520, 350};
	int maxClass[5] = {30, 30, 60, 30, 60};
	int classSize[5] = {12, 10, 45, 30, 59};
	int i, found = 0, newclass = 0;

	do
	{
		printf("\nCourses available\n------------------------------\n");
		for (i = 0; i < 5; i++)
		{ // Loop should go until 5, not 6
			puts(courseName[i]);
		}
		printf("------------------------------");
		printf("\nEnter language course:\n");
		fgets(course, sizeof(course), stdin); // Using fgets to avoid issues with gets
		course[strcspn(course, "\n")] = 0;	  // Remove trailing newline if present

		for (i = 0; i < 5; i++)
		{
			if (strcasecmp(course, courseName[i]) == 0)
			{ // Using strcasecmp for case-insensitive comparison
				if (classSize[i] >= maxClass[i])
				{
					printf("Class already full\n");
				}
				else
				{
					printf("The fee is: RM%d\n", fee[i]);
					printf("Class size is: %d\n", classSize[i]);
					found = 1;
					newclass = ++classSize[i];
					printf("New class size is: %d", newclass);
				}
				break;
			}
		}

		if (found == 0)
			printf("Invalid course name entered.\n");

		printf("\nDo you want to continue? (y/n) ");
		scanf(" %c", &ans);

		while (getchar() != '\n')
			; // Flush the input buffer
	} while (ans == 'y' || ans == 'Y');

	printf("\nPress Enter to continue...");
	while (getchar() != '\n')
		;	   // Wait for Enter key
	getchar(); // Capture the Enter key

	return 0;
}

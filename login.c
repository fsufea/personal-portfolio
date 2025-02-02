/* This program is a simple login system that verifies user credentials based on a predefined 
list of usernames and passwords. The user is prompted to enter a username and password. If 
both match a valid pair in the system, the program displays a success message. If either the
 username or password is incorrect, it informs the user of an invalid login attempt. 
 The program uses secure input handling with fgets() to prevent buffer overflows and properly 
 handles newline characters.*/
 
#include <stdio.h>
#include <string.h>

int main()
{
	char username[3][10] = {"Ahmad", "Nur", "Fahmi"};
	char password[3][10] = {"hello123", "welcome", "$frt#a26"};
	int x, found = 0;
	char user[10], pass[10];

	printf("Username: ");
	fgets(user, sizeof(user), stdin); // Use fgets instead of gets
	user[strcspn(user, "\n")] = 0;	  // Remove newline character from input

	printf("Password: ");
	fgets(pass, sizeof(pass), stdin); // Use fgets instead of gets
	pass[strcspn(pass, "\n")] = 0;	  // Remove newline character from input

	for (x = 0; x < 3; x++)
	{
		if ((strcmp(user, username[x]) == 0) && (strcmp(pass, password[x]) == 0))
		{
			printf("Login successfully\n");
			found = 1;
			break;
		}
	}
	if (found == 0)
	{
		printf("Invalid user\n");
	}

	return 0;
}

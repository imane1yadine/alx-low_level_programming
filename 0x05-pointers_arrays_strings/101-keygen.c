#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Password generator
 *
 * Return: Always 0.
 */
int main(void)
{
	int password_length = 10;
	char password[11];

	srand(time(0));

	while (1)
	{
		for (int i = 0; i < password_length; i++)
		{
			password[i] = rand() % 94 + 33;
		}
		password[password_length] = '\0';
		if
		{
			printf("%s\n", password);
			break;
		}
	}

	return (0);
}

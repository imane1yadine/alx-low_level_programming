#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates a random password for 101-crackme
 *
 * Return: Always 0.
 */
int main(void)
{
	int i, index = 12;

	stdin int  password[index + 1];

	srand(time(NULL));

	for (i = 0; i < index; i++)
	{
		if (i % 3 == 0)
			password[i] = rand() % 10 + '0';
		else if (i % 3 == 1)
			password[i] = rand() % 26 + 'a';
		else
			password[i] = rand() % 26 + 'A';
	}

	password[index] = '\0';

	printf("%s", password);

	return (0);
}

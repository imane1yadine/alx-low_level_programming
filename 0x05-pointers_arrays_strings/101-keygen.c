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
	int i, length = 12;
	int password[length + 1];

	srand(time(NULL));

	for (i = 0; i < length; i++)
	{
		if (i % 3 == 0)
			password[i] = rand() % 10 + '0'; /* digit */
		else if (i % 3 == 1)
			password[i] = rand() % 26 + 'a'; /* lowercase letter */
		else
			password[i] = rand() % 26 + 'A'; /* uppercase letter */
	}

	password[length] = '\0';

	printf("%s", password);

	return (0);
}

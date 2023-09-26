#include <unistd.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to the string to be scanned
 * @accept: pointer to the string containing characters to match
 *
 * Return: the number of bytes in the initial segment of s that consist only
 * of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int found;

	while (*s)
	{
		found = 0;
		while (*accept)
		{
			if (*s == *accept)
			{
				count++;
				found = 1;
				break;
			}
			accept++;
		}
		if (!found)
			break;
		s++;
	}

	return (count);
}

#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @str: The input string.
 *
 * Return: A pointer to the modified string.
 */
char *leet(char *str)
{
	char leet_map[] = "aAeEoOtTlL";
	char leet_replacements[] = "4433007711";
	char *ptr = str;
	int i;

	while (*ptr)
	{
		for (i = 0; leet_map[i]; i++)
		{
			if (*ptr == leet_map[i])
			{
				*ptr = leet_replacements[i];
				break;
			}
		}
		ptr++;
	}

	return (str);
}

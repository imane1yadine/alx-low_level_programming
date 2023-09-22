#include "main.h"

/**
 * rot13 - Encodes a string using ROT13.
 * @str: The input string.
 *
 * Return: A pointer to the modified string.
 */
char *rot13(char *str)
{
	char *ptr = str;
	char *rot13_lower = "abcdefghijklmnopqrstuvwxyz";
	char *rot13_upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *rot13_result_lower = "nopqrstuvwxyzabcdefghijklm";
	char *rot13_result_upper = "NOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*ptr)
	{
		char *lower = strchr(rot13_lower, *ptr);
		char *upper = strchr(rot13_upper, *ptr);

		if (lower)
		{
			*ptr = rot13_result_lower[lower - rot13_lower];
		}
		else if (upper)
		{
			*ptr = rot13_result_upper[upper - rot13_upper];
		}

		ptr++;
	}

	return (str);
}

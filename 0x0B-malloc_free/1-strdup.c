#include <stdlib.h>

/**
 * _strdup - Duplicate a string.
 * @str: The string to duplicate.
 *
 * Return: A pointer to a newly allocated memory containing a duplicate
 *         of the string `str`, or NULL if memory allocation fails.
 */

char *_strdup(char *str)
{
	int length;
	char *duplicate;

	if (str == NULL)
	{
		return (NULL);
	}

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}

	duplicate = malloc((length + 1) * sizeof(char));
	if (duplicate == NULL)
	{
		return (NULL);
	}

	for (int i = 0; i <= length; i++)
	{
		duplicate[i] = str[i];
	}

	return (duplicate);
}

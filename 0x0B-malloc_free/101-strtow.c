#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - Calculate the length of a string.
 * @str: The string to calculate the length of.
 *
 * Return: The length of the string.
 */
int _strlen(char *str)
{
	int length = 0;

	while (str[length] != '\0')
		length++;

	return (length);
}

/**
 * _strdup - Duplicate a string.
 * @str: The string to duplicate.
 *
 * Return: A pointer to the newly allocated duplicated string.
 */
char *_strdup(char *str)
{
	char *duplicate;
	int i, length;

	if (str == NULL)
		return (NULL);

	length = _strlen(str);

	duplicate = malloc((length + 1) * sizeof(char));

	if (duplicate == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
		duplicate[i] = str[i];

	duplicate[length] = '\0';

	return (duplicate);
}

/**
 * strtow - Split a string into words.
 * @str: The string to split.
 *
 * Return: A pointer to an array of strings (words), or NULL if it fails.
 */
char **strtow(char *str)
{
	char **words;
	char *token;
	int i, j, word_count = 0;

	if (str == NULL || *str == '\0')
		return (NULL);

	words = malloc(_strlen(str) * sizeof(char *));

	if (words == NULL)
		return (NULL);

	token = strtok(str, " ");

	while (token != NULL)
	{
		words[word_count] = _strdup(token);

		if (words[word_count] == NULL)
		{
			for (i = 0; i < word_count; i++)
				free(words[i]);

			free(words);
			return (NULL);
		}

		word_count++;
		token = strtok(NULL, " ");
	}

	words[word_count] = NULL;

	return (words);
}

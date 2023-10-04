#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of a program.
 * @ac: The argument count.
 * @av: The argument vector (an array of strings).
 *
 * Return: A pointer to a new string containing the concatenated arguments,
 *         or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
	if (ac == 0 || av == NULL)
		return (NULL);

	int i, j, total_length = 0;
	char *result, *temp;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			total_length++;
		total_length++;
	}

	result = malloc((total_length + 1) * sizeof(char));

	if (result == NULL)
		return (NULL);

	temp = result;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			*temp++ = av[i][j];
		*temp++ = '\n';
	}

	*temp = '\0';

	return (result);
}

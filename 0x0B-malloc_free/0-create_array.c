#include <stdlib.h>

/**
 * create_array - Creates an array of characters
 * \and initializes it with a specific character.
 * @size: The size of the array to create.
 * @c: The character to initialize the array with.
 *
 * Return: If memory allocation fails or size is 0, returns NULL.
 *         Otherwise, returns a pointer to the allocated array.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}

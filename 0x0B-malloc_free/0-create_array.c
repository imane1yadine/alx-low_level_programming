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
	if (size == 0)
		return (NULL);

	char *array = malloc(size * sizeof(char));

	if (array == NULL)
		return (NULL);

	for (unsigned int i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}

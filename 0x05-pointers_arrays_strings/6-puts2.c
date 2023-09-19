#include "main.h"

/**
 * puts2 - Prints every other character of a string.
 * @str: The string to be printed.
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++1)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}

	_putchar('\n');
}

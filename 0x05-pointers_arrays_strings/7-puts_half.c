#include "main.h"

/**
 * puts_half - Prints half of a string followed by a new line.
 * @str: The string to be printed.
 */

void puts_half(char *str)
{
	int length = 0;
	int i;

	while (str[length] != '\0')
		length++;

	if (length % 2 == 0)
		i = length / 2;
	else
		i = (length + 1) / 2;

	for (; i < length; i++)
		_putchar(str[i]);

	_putchar('\n');
}

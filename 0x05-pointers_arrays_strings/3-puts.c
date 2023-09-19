#include "main.h"

/**
 * _puts - Prints a string followed by a new line to stdout.
 * @str: A pointer to a string (an array of characters).
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_puts(*str);
		str++;
	}
	_putchar('\n');
}

#include "main.h"

/**
 * _puts - Prints a string followed by a new line to stdout.
 *
 * @str: string parametr to print
 *
 * Return: Nothing
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}

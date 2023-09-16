#include "main.h"

/**
 * print_line - draws a straight line of underscores in the terminal
 * @n: The number of times to print the underscore character
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n')
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}

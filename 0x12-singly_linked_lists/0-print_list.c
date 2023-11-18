#include "lists.h"

/**
 * print_listchar - prints all elements of a list
 *
 * @h: list to print elements of
 * Return: size_t of the list
 */
size_t print_listchar(const listchar_t *h)
{
	size_t n = 0;

	while (h)
	{
		printf("%c\n", h->c);
		h = h->next;
		n++;
	}
	return (n);
}

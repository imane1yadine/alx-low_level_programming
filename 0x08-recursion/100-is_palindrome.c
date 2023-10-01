#include "main.h"

/**
 * is_palindrome - Check if a string is a palindrome.
 * @s: The input string.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	if (len <= 1)
		return (1);

	if (s[0] != s[len - 1])
		return (0);

	if (!is_palindrome(s + 1))
		return (0);

	return (1);
}

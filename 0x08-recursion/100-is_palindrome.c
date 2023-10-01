#include <stdio.h>

/**
 * is_palindrome - Check if a string is a palindrome.
 * @s: The input string.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int len = 0;
	int i;

	while (s[len] != '\0')
		len++;

	if (len <= 1)
		return (1);

	if (s[0] != s[len - 1])
		return (0);

	for (i = 1; i < len - 1; i++)
	{
		if (!is_palindrome(s + i))
			return (0);
	}
	return (1);
}

int main(void)
{
	int r;

	r = is_palindrome("level");
	printf("%d\n", r);
	r = is_palindrome("redder");
	printf("%d\n", r);
	r = is_palindrome("test");
	printf("%d\n", r);
	r = is_palindrome("step on no pets");
	printf("%d\n", r);
	return (0);
}

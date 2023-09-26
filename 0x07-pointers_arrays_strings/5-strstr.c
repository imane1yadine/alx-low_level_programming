#include <unistd.h>

/**
 * _strstr - locates a substring
 * @haystack: pointer to the string to search in
 * @needle: pointer to the substring to locate
 *
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *haystack_temp = haystack;
		char *needle_temp = needle;

		while (*haystack_temp == *needle_temp && *needle_temp != '\0')
		{
			haystack_temp++;
			needle_temp++;
		}

		if (*needle_temp == '\0')
			return (haystack);

		haystack++;
	}

	return (NULL);
}

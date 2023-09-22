#include "main.h"
#include <stdio.h>

char *cap_string(char *);

int main(void)
{
	char str[] = "hello world! how are you?";
	char *ptr;

	ptr = cap_string(str);
	printf("%s\n", ptr);

	return (0);
}

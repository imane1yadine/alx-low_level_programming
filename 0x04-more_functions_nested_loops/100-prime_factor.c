#include <math.h>

/**
 * (~)
*/

int main(void)
{
	long number = 612852475143;
	long largestPrime = -1;
	int divisor = 2;

	while (number > 1)
	{
		if (number % divisor == 0)
		{
			largestPrime = divisor;
			while (number % divisor == 0)
			{
				number /= divisor;
			}
		}
		divisor++;
	}

	printf("%ld\n", largestPrime);

	return (0);
}

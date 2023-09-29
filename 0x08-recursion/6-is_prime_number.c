#include "main.h"

/**
 * is_prime_number - Checks if a number is prime.
 * @n: The number to check.
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime_number(int n);

/**
 * check_prime - Helper function to check for primality using recursion.
 * @n: The number to check for primality.
 * @divisor: The current divisor to test.
 * Return: 1 if n is prime, 0 otherwise.
 */
int check_prime(int n, int divisor);

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (check_prime(n, 2));
}

int check_prime(int n, int divisor)
{
	if (divisor * divisor > n)
		return (1);

	if (n % divisor == 0)
		return (0);

	return (check_prime(n, divisor + 1));
}

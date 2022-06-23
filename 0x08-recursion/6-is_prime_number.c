#include "main.h"
/**
 * is_prime_number - confirms if the given number is prime or not.
 * @n: the given number.
 *
 * Return: 1 if n is a prime number and 0 if not.
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	return (prime_number(n, 2));
}

/**
 * prime_number - Determines if a number is prime or not.
 * @n: The number to be checked if prime or not.
 * @p: The divisor.
 *
 * Return: 1 if n is prime, and 0 if not
 */
int prime_number(int n, int p)
{
	if (n % p == 0 && p < n)
		return (0);
	if (p > n / 2)
		return (1);

	return (prime_number(n, p + 1));
}

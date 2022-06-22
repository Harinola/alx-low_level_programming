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

	return ( + is_prime_number(n - 1));
}

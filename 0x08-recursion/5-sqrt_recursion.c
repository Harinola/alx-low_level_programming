#include "main.h"
/**
 * _sqrt_recursion - Finds the natural square root of a number.
 * @n: The given integer value.
 *
 * Return: The natural square root of the number or -1 if it doesn't have one.
 */
int _sqrt_recursion(int n)
{

	if (n < 0)
	{
		return (-1);
	}

	return (_sqrt(n, 0));
}

/**
 * _sqrt - Finds the square root of a given integer.
 * @n: The given integer value.
 * @i: The expectant square-root.
 *
 * Return: The square root of the number.
 */
int _sqrt(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	if (i * i > n)
	{
		return (-1);
	}

	return (_sqrt(n, i + 1));
}

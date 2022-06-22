#include "main.h"
/**
 * _sqrt_recursion - finds the natural square root of a number.
 * @n: the given number.
 *
 * Return: the natural square root of the number or -1 if it doesn't have one.
 */
int _sqrt_recursion(int n)
{

	if (n == 1)
	{
		return (1);
	}
	if (n)
	{
		return ();
	}

	return (n / _sqrt_recursion());
}

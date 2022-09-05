#include "main.h"

/**
 * _abs - Transforms a given integer to its absolute value.
 *@n: The given integer.
 *
 * Return: Absolute value of the given integer.
 */
int _abs(int n)
{
	int abs;

	if (n >= 0)
		abs = n;
	else
		abs = -1 * n;

	return (abs);
}

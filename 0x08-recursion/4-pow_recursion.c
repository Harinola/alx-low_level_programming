#include "main.h"
/**
 * _pow_recursion - computes the value of a number raised to a power:
 * @x: the number.
 * @y: the power.
 *
 * Return: 'x' raised to the power of 'y'
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}

	return (x * _pow_recursion(x, y - 1));
}

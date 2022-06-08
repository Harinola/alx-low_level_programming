#include "main.h"

/**
 *print_sign - checks if the inputed number is positive or negative.
 *@n: the number to check.
 *
 * Return: 1 and prints '+' if positive.
 *	0 and prints 0 if number equals 0.
 *	-1 and prints '-' if negative.
 */
int print_sign(int n)
{
	int val;

	if (n > 0)
	{
		_putchar('+');
		val = 1;
	}
	else if (n < 0)
	{
		_putchar('-');
		val = -1;
	}
	else
	{
		_putchar('0');
		val = 0;
	}

	return (val);
}

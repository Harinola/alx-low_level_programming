#include "main.h"
/**
 * print_number - prints a number
 * @n: number to be printed
 *
 * Return: void.
 */
void print_number(int n)
{
	int count, num, i;

	count = 0;
	num = n;

	while (num > 0)
	{
		count++;

		num /= 10;
	}
	if (n < 0)
	{
		n = -n;

		_putchar('-');
	}
	for (i = count; i > 0; i--)
	{
		_putchar((n %= 10) + '0');
	}

	_putchar('\n');
}

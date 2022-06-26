#include "main.h"
/**
 * print_number - prints a number
 * @n: number to be printed
 *
 * Return: void.
 */
void print_number(int n)
{
	int count, num, i, k;

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
		k = n % 10;
		n /= 10;
		_putchar((k) + '0');
	}

	_putchar('\n');
}

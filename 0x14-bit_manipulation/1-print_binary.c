#include "main.h"
/**
 * print_binary - prints the binary representation of a number.
 * @n: the given number.
 */
void print_binary(unsigned long int n)
{
	unsigned long int bit;
	int i, flag = 0;

	for (i = 63; i >= 0; i--)
	{
		bit = n >> i;

		if (bit & 1)
		{
			_putchar('1');
			flag++;
		}
		else if (flag)
			_putchar('0');
	}

	if (!flag)
		_putchar('0');
}

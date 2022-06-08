#include "main.h"

/**
 * print_times_table - print times table starting from 0 to n <= 15.
 * @n: the max number of times table to be printed.
 *
 * Return: void (No value).
 */
void print_times_table(int n)
{
	int i, j;

	if (n >= 0 && n <= 15)
	{
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
		int mul = i * j;

		if (j > 0)
		{
			spaces(mul);
		}
		if (mul < 10)
		{
			_putchar(mul + '0');
		}
		else if (mul >= 10 && mul < 100)
		{
			_putchar((mul / 10) + '0');
			_putchar((mul % 10) + '0');
		}
		else
		{
			_putchar((mul / 100) + '0');
			_putchar(((mul / 10) % 10) + '0');
			_putchar((mul % 10) + '0');
		}
		}
		_putchar('\n');
	}
	}
}

/**
 * spaces - inserts spaces nd comma into the times table.
 *@m: integer input on which the amount of spaces is dependent.
 *
 * Return: void.
 */
void spaces(int m)
{
			if (m < 10)
			{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			_putchar(' ');
			}
			else if (m >= 10 && m < 100)
			{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			}
			else
			{
			_putchar(',');
			_putchar(' ');
			}
}

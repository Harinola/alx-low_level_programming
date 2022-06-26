#include "main.h"
/**
 * print_number - prints a number
 * @n: number to be printed
 *
 * Return: void.
 */
void print_number(int n)
{
	int count, num, i, indx, k, plc_hld;

	count = 0;
	plc_hld = 1;
	
	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		if (n < 0)
		{
			n = -n;
			_putchar('-');
		}
		num = n;
		while (num > 0)
		{
			count++;
			num /= 10;
		}

		for (i = count; i > 0; i--)
		{
			indx = i - 1;
			if (indx > 0)
			{
				while (indx-- > 0)
				{
					plc_hld *= 10;
				}
				k = (n / plc_hld) % 10;
			}
			else
			{
				k = n % 10;
			}
			_putchar((k) + '0');
		}
	}

}

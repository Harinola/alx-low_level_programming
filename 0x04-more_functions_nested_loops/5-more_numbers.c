#include "main.h"
/**
 * more_numbers - prints from 0 to 14, 10 times on a different line.
 *
 * Return: void.
 */
void more_numbers(void)
{
	int i, j = 0, k;

	for (; j < 10; j++)
	{
		i = 0;

		while (i < 15)
		{
			if (i < 10)
			{
				k = i * 10;
			}
			else
			{
				k = i;
			}

			_putchar(k / 10 + '0');

			if (i >= 10)
			_putchar(k % 10 + '0');

			i++;
		}
		_putchar('\n');
	}
}

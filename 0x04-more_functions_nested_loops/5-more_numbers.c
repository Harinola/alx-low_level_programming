#include "main.h"
/**
 * more_numbers - prints from 0 to 14, 10 times on a different line.
 *
 * Return: void.
 */
void more_numbers(void)
{
	int i = 0, j = 0;

	while (j < 10)
	{
		while (i < 15)
		{
			_putchar(i / 10 + '0');

			if (i >= 10)
			_putchar(i % 10 + '0');

			i++;
		}
		j++;
	}
	_putchar('\n');
}

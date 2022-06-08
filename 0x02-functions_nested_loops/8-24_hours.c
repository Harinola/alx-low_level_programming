#include "main.h"

/**
 * jack_bauer - prints the time in 24 hours format fromm 00:00 to 23:59.
 *
 * Return: void (no value).
 */
void jack_bauer(void)
{
	int h, h1, m, m1;

	for (h = 0; h < 3; h++)
	{
	for (h1 = 0; h1 < 10; h1++)
	{
	for (m = 0; m < 6; m++)
	{
	for (m1 = 0; m1 < 10; m1++)
	{
		int r = h * 10 + h1;
		if (r > 23)
			break;

		_putchar(h + '0');
		_putchar(h1 + '0');
		_putchar(':');
		_putchar(m + '0');
		_putchar(m1 + '0');
		_putchar('\n');
	}
	}
	}
	}
}

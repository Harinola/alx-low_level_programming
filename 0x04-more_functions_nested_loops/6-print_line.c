#include "main.h"
/**
 * print_line - prints a line
 * @n: an integer value that specifies the length of the line
 *
 * Return: void
 */
void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		while (i < n)
		{
			_putchar('_');
			i++;
		}
	}

	_putchar('\n');
}

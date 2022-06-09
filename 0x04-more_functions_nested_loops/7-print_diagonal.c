#include "main.h"
/**
 * print_diagonal - prints a diagonal line using back-slash
 * @n: an integer value that specifies the length of the diagonal
 * or the number of back-slashes used
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');

			if (i < n - 1)
				_putchar('\n');
		}
	}

	_putchar('\n');
}

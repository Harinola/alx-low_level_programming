#include <stdio.h>

/**
 * print_to_98 - prints from a given integer down/up to 98.
 * @n: the starting point(int value).
 *
 * Return: void(no value).
 */
void print_to_98(int n)
{
	int i, j;

	printf("%d", n);

	if (n > 98)
	{
	--n;

	for (i = n; i >= 98; i--)
	{
		printf(", %d", i);
	}
	}
	else if (n < 98)
	{
	++n;

	for (j = n; j <= 98; j++)
	{
		printf(", %d", j);
	}
	}
	printf("\n");
}

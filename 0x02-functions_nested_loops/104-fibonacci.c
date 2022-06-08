#include <stdio.h>

/**
 * main - Entry point.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	int i;
	long double a = 1, b = 0;

	for (i = 0; i < 98; i++)
	{
	long double nxt_num = a + b;

		b = a;
		a = nxt_num;

		if (i > 0)
			printf(", ");

		printf("%.0Lf", nxt_num);

	}

	printf("\n");

	return (0);
}

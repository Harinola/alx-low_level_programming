#include <stdio.h>

/**
 * main - Entry point.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	int i, a = 1, b = 0;

	for (i = 0; i < 50; i++)
	{
	long unsigned int nxt_num = a + b;

		b = a;
		a = nxt_num;

		if (i > 0)
			printf(", ");

		printf("%ld", nxt_num);

	}

	printf("\n");

	return (0);
}

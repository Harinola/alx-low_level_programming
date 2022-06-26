#include <stdio.h>

/**
 * main - Entry point.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	unsigned long int i, a, a1, a2, b, b1, b2, nxt_num, nxt_num2;
	
	a = 1;
	b = 0;

	for (i = 0; i < 92; i++)
	{
	nxt_num = a + b;

		b = a;
		a = nxt_num;

		if (i > 0)
			printf(", ");

		printf("%lu", nxt_num);
	}
	a1 = a / 10000000000;
	b1 = b / 10000000000;
	a2 = a % 10000000000;
	b2 = b % 10000000000;
	
	for (i = 92; i < 98; i++)
	{
		nxt_num = a1 + b1;
		nxt_num2 = a2 + b2;

		b1 = a1;
		a1 = nxt_num;
		b2 = a2;
		a2 = nxt_num2;

		printf(", %lu", nxt_num + (nxt_num2 / 10000000000));
		printf("%lu", nxt_num2 % 10000000000);
	}

	printf("\n");

	return (0);
}

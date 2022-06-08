#include <stdio.h>

/**
 * main - Entry point.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	int i, a = 1, b = 0, sum = 0;

	for (i = 0; i < 50; i++)
	{
		int nxt_num = a + b;

		b = a;
		a = nxt_num;

		if (nxt_num <= 4000000 && nxt_num % 2 == 0)
			sum += nxt_num;
		else if (nxt_num > 4000000)
			break;
	}

	printf("%d\n", sum);

	return (0);
}

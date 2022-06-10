#include <stdio.h>
/**
 * main - prints the largest prime factor of a positive integer
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	long int i, num = 612852475143, j = num, max_prime;

	for (i = 2; i <= j; i++)
	{
		if (j % i == 0)
		{
			j /= i;
			max_prime = i;
			i = 2;
		}
		else
		{
			continue;
		}
	}
	printf("%ld\n", max_prime);
	return (0);
}

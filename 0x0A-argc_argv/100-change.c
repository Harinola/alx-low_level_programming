#include <stdio.h>
#include <stdlib.h>
/**
 * main - outputs the minimum amount of coins needed to complete the change.
 * @argc: amount of arguments passed.
 * @argv: array of arguments passed.
 *
 * Return: 0(Success) or 1(Error).
 */
int main(int argc, char *argv[])
{
	int i, n_coin, change;
	int coins[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	change = atoi(argv[1]);
	n_coin = 0;

	if (change < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5 && change > 0; i++)
	{
		while (coins[i] <= change)
		{
			change -= coins[i];
			n_coin++;
		}
	}

	printf("%d\n", n_coin);

	return (0);
}

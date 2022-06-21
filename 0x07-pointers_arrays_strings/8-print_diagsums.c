#include "main.h"
/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix.
 * @a: the given square matrix as a 2D array.
 * @size: the size of the array.
 *
 * Return: void.
 */
void print_diagsums(int *a, int size)
{
	int i, j, rsum = 0, lsum = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				rsum += *(*(a + i) + j);
			}
			if (i + j == size - 1)
			{
				lsum += *(*(a + i) + j);
			}
		}
	}

	printf("%d, %d\n", rsum, lsum);
}

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
	int i, rsum = 0, lsum = 0;

	for (i = 0; i < size * size; i++)
	{
		if (i % (size + 1) == 0)
		{
			rsum += *(a + i);
		}
		if (i % (size - 1) == 0 && (i != 0 && i != (size * size) - 1))
		{
			lsum += *(a + i);
		}
	}

	printf("%d, %d\n", rsum, lsum);
}

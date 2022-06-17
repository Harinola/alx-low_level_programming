#include "main.h"
/**
 * reverse_array - reverses the contents of an array.
 * @a: pinter to an integer array.
 * @n: number of elements of the array.
 *
 * Return: void.
 */
void reverse_array(int *a, int n)
{
	int i, j = 0;
	int new_a[n - 1];

	for (i = n - 1; i >= 0; i--)
	{
		new_a[i] = *(a + j);
		j++;
	}

	j = 0;
	for (j = 0; j < n; j++)
	{
		*(a + j) = new_a[j];
	}

}

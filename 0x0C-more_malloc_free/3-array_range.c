#include "main.h"
#include <stdlib.h>
/**
 * array_range - Creates an array of integers.
 * @min: minimum value in the array.
 * @max: maximum values in the array.
 *
 * Return: Address to the memory space containing the array.
 */
int *array_range(int min, int max)
{
	int *arr;
	int i, val;

	i = 0;
	val = min;
	if (min > max)
		return (NULL);

	arr = malloc(sizeof(*arr) * (max - min + 1));
	if (arr == NULL)
		return (NULL);

	while (val <= max)
	{
		arr[i] = val;
		i++;
		val++;
	}

	return (arr);
}

#include "function_pointers.h"
/**
 * int_index - Searches for an integer in an array and returns it's index.
 * @array: The given array.
 * @size: Size of the array.
 * @cmp: a pointer to the function used to compare values.
 *
 * Return: returns the index for the first element which cmp doesn.t return 0,
 * -1 if no element matches or size <= 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

/*
 * if the for loop is exited,
 * this implies that there is no match in the array,
 * hence, return -1.
 */
	return (-1);
}

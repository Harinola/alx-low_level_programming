#include "function_pointers.h"
/**
 * array_iterator - A function that executes a function passed as an argument
 * on each element of an array.
 * @array: The given array of integer values.
 * @size: size of the array.
 * @action: function pointer that takes an integer argument and returns void.
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t j;

	for (j = 0; j < size; j++)
		action(array[j]);
}

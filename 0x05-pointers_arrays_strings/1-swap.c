#include "main.h"
/**
 * swap_int - swaps the value of two variables using pointers.
 * @a: pointer to first variable.
 * @b: pointer to second variable.
 *
 * Return: void.
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

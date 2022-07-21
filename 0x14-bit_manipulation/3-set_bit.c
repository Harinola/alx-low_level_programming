#include "main.h"
/**
 * set_bit - sets the value of a bit at a given index to 1.
 * @n: number to be considered.
 * @index: given index, starts from 0.
 *
 * Return: 1(Success) or -1(Failure).
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (*n | (1UL << index));

	return (1);
}

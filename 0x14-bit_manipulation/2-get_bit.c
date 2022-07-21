#include "main.h"
/**
 * get_bit - Return the value of a bit at a given index.
 * @n: number to be considered.
 * @index: given index, starts from 0.
 *
 * Return: the value of the bit at index or -1(Failure).
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;

	if (index > 63)
		return (-1);

	bit_value = (n >> index) & 1;

	return (bit_value);
}

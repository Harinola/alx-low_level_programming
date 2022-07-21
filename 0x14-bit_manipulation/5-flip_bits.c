#include "main.h"
/**
 * flip_bits - checks the number of bits that needs to be flipped
 * to get from one number to another.
 * @n: the first number.
 * @m: the second number.
 *
 * Return: number of bits that needs to be changed to get
 * from one number to the other.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i;
	unsigned int cnt = 0;
	unsigned long int res;

	for (i = 63; i >= 0; i--)
	{
		res = (n ^ m) >> i;
		if (res & 1)
			cnt++;
	}

	return (cnt);
}

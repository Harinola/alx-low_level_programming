#include "main.h"
/**
 * get_endianness - checks the endianness used by the system.
 *
 * Return: 0(big endian), 1(little endian).
 */
int get_endianness(void)
{
	int var = 1;
	char *s = (char *) &var;

	return (*s);
}

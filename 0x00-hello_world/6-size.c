#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char _char;
	int _int;
	long int lng_int;
	long long int lng_lng_int;
	float _flt;

	printf("Size of a char: %d byte(s)\n", (int)sizeof(_char));
	printf("Size of a int: %d byte(s)\n", (int)sizeof(_int));
	printf("Size of a long int: %d byte(s)\n", (int)sizeof(lng_int));
	printf("Size of a long long int: %d byte(s)\n", (int)sizeof(lng_lng_int));
	printf("Size of a float: %d byte(s)\n", (int)sizeof(_flt));
	return (0);
}

#include <stdio.h>
#include "main.h"

int main(void)
{
	int n;

	n = _pow_recursion(1, 5);
	printf("%d\n", n);
	n = _pow_recursion(2, -5);
	printf("%d\n", n);
	n = _pow_recursion(-3, 3);
	printf("%d\n", n);
	n = _pow_recursion(-1, 5);
	printf("%d\n", n);
	return (0);
}

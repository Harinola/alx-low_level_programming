#include <stdio.h>

/*
 * applying the constructor attribute to first so it executes before main.
 */
void first(void) __attribute__((constructor));

/**
 * first - prints a string to the output before main is executed.
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

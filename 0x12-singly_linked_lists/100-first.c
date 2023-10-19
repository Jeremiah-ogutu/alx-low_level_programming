#include "lists.h"

/**
 * print_beforeMain- fuctio that prints the required value before main
 *
 */
void print_beforeMain(void) __attribute__((constructor));

void print_beforeMain(void)
{
	printf("You're beat! and yet, you must allow,\n"
		"I bore my house upon my back!\n");
}

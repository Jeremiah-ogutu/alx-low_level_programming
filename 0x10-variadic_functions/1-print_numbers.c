#include "variadic_functions.h"
#include  <stdarg.h>
#include <stdio.h>


/**
 * print_numbers - function that print numbers
 * @separator:string pointer to be printed
 * @n:number of interger passed
 * Reurn: 0 success
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	int num;
	unsigned int i;


	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
		printf("%d", num);
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}

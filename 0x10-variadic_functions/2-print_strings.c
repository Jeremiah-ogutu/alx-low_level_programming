#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings- function that print strings
 * @separator:the pointer string
 * @n:number of string
 * Return:0 success
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	const char *current_str;
	unsigned int printed_strings = 0;
	va_list args;

	va_start(args, n);

	while (
			printed_strings < n)
	{
		current_str = va_arg(args, const char *);

		if (current_str == NULL)
		{
			printf("(nil)");
		}
		else
		{printf("%s", current_str);
		}
		if (separator != NULL && printed_strings < n - 1)
		{
			printf("%s", separator);
		}
		printed_strings++;
	}
	va_end(args);
	printf("\n");
}

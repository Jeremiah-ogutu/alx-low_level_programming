#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all-function printing any thing
 * @format:list of arg past to the fuction
 * Return:o
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *separator = "";
	va_list args;

	va_start(args, format);

	while (format && format[i])
	{
		if (format[i] == 'c')
		{
			printf("%s%d", separator, va_arg(args, int));
		}
		else if
			(format[i] == 'i')
			{
				printf("%s%d", separator, va_arg(args, int));
			}
		else if
			(format[i] == 'f')
			{
				printf("%s%f", separator, va_arg(args, double));
			}
		else if
			(format[i] == 's')
			{
				char *str = va_arg(args, char *);
				if (str == NULL)
				{
					printf("%s(nil)", separator);
				}
				else
				{
					printf("%s%s", separator, str);
				}
			}
		separator = ",";
		i++;

		if (i > 0 && i % 2 == 0)
		{
			break;
		}
	}
	va_end(args);
	printf("\n");
}


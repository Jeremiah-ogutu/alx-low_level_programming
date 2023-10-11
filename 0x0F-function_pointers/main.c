#include "operation.h"
#include "error_code.h"
/**
 * main - this the starting point for arithmeti operation
 * @argc:interger rep
 * @argv:array of pointer
 * @num:the number to be printed
 * Return: 0 success
 */

void print_integer(int num);

int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		putchar('E');
		putchar('r');
		putchar('r');
		putchar('o');
		putchar('r');
		putchar('\n');
		return (ERR_ARGC);
	}

	int num1 = atoi(argv[1]);
	char operator = argv[2][0];
	int num2 = atoi(argv[3]);
	int result;

	switch (operator)
	{
		case '+':
			result = add(num1, num2);
			break;
		case '-':
			result = subtract(num1, num2);
			break;
		case '*':
			result = multiply(num1, num2);
			break;
		case '/':
			if (num2 == 0)
			{
				putchar('E');
				putchar('r');
				putchar('r');
				putchar('o');
				putchar('r');
				putchar('\n');
				return (ERR_DIVIDE_BY_ZERO);
			}
			result = divide(num1, num2);
			break;
		case '%':
			if (num2 == 0)
			{
				putchar('E');
				putchar('r');
				putchar('r');
				putchar('o');
				putchar('r');
				putchar('\n');
				return (ERR_DIVIDE_BY_ZERO);
			}
			result = modulo(num1, num2);
			break;
		default:
			putchar('E');
			putchar('r');
			putchar('r');
			putchar('o');
			putchar('r');
			putchar('\n');
			return (ERR_UNKNOWN_OPERATOR);
	}

	if (result < 0)
	{
		putchar('-');
		result = -result;
	}

	print_integer(result);
	putchar('\n');
	return (0);
}
/**
 * print_integer-print actual number
 * @num:the number to be printed
 */
void print_integer(int num)
{
	if (num == 0)
	{
		putchar('0');
		return;
	}
	while (num > 0)
	{
		int digit = num % 10;

		putchar(digit + '0');
		num /= 10;
	}
}

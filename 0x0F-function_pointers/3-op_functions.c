#include "3-calc.h"
/**
 * add - starting of addition
 * subtract-starting of subtraction
 * multiply-starting of multiplication
 * divide-starting of division
 * modulo-starting of modelo
 * @num1:the first number in operation
 * @num2:the second number in operation
 * Return:the operation of num1 and num2
 */
int add(int num1, int num2)
{
	return (num1 + num2);
}

/**
 * subtract-two integers and returns the result.
 *
 * @num1:The first integer.
 * @num2:The second integer.
 * Return:The result of a - b.
 */

int subtract(int num1, int num2)
{
	return (num1 - num2);
}

/**
 * multiply-two integers and returns the result.
 *
 * @num1: The first integer.
 * @num2: The second integer.
 * Return:The result of a * b.
 */

int multiply(int num1, int num2)
{
	return (num1 * num2);
}

/**
 * divide-two integers and returns the result. If the divisor is zero,error
 *
 * @num1:The dividend.
 * @num2:The divisor.
 * Return:The result of a / b, or an error code for division by zero.
 */

int divide(int num1, int num2)
{
	return (num1 / num2);
}

/**
 * modulo-Calculates the remainder of the division of two integers.
 *
 * @num1:The dividend.
 * @num2:The divisor.
 * Return: The remainder of the division of a by b.
 */

int modulo(int num1, int num2)
{
	return (num1 % num2);
}
/**
 * print_integer-collect integer value
 * @num:the value to be collected
 */

void print_integer(int num);


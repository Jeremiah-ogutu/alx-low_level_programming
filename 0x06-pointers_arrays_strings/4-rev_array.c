#include "main.h"
/**
 * reverse_array-function that reverses  an array of interger
 * @a:the array
 * @n:the interger
 *Return:0 success
 */
void reverse_array(int *a, int n)
{
	int start;
	int end;

	for (start = 0 ; start < n-- ; start++)
	{
		end = a[start];
		a[start] = a[n];
		a[n] = end;
	}
}

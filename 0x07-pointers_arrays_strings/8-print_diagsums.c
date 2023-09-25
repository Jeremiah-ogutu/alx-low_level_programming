#include "main.h"
/**
 * print_diagsums-its a function  that calculates sum of two diagonal
 * @a:The matrix of square
 * @size:the size of the matrix
 */

void print_diagsums(int *a, int size)
{
	int sumMain = 0;
	int sumSec = 0;
	int matrixPos;

	for (matrixPos = 0; matrixPos < size; matrixPos++)
	{
		sumMain += a[matrixPos * size + matrixPos];
	}
	for (matrixPos = 0; matrixPos < size; matrixPos++)
	{
		sumSec += a[matrixPos * size + (size - 1 - matrixPos)];
	}
	printf("%d\n", sumMain);
	printf("%d\n", sumSec);
}

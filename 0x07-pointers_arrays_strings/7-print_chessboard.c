#include "main.h"
/**
 * print_chessboard-function that print chessboard
 * @a:pointer of what is to be printed
 *
 */

void print_chessboard(char (*a)[8])
{
	int row;
	int collum;

	for (row = 0; row < 8; row++)
	{
		for (collum = 0; collum < 8; collum++)
		{
			printf("%c", a[row][collum]);
		}
		printf("\n");
	}
}

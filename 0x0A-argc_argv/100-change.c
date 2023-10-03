#include <stdio.h>
#include <stdlib.h>
/**
 * main-program that print the minimum number of coins
 * @argc:its the counter
 * @argv:te pointer
 * Return:0 success else 1
 */
int main(int argc, char *argv[])
{
	int cent;
	int numCoins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cent = atoi(argv[1]);

	if (cent < 0)
	{
		printf("0\n");
		return (0);
	}

	while (cent > 0)
	{
		if (cent >= 25)
		{cent -= 25;
		}
		else if
			(cent >= 10)
			{
				cent -= 10;
			}
		else if
			(cent >= 2)
			{
				cent -= 2;
			}
		else
		{cent -= 1;
		}
		numCoins++;
	}
	printf("%d\n", numCoins);
	return (0);
}


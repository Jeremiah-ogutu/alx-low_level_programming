#include <stdio.h>
#include <stdlib.h>
/**
 * main- starting point
 * @argc:counter
 * @argv:pointer
 * Return:0 success els 1 fail
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	result = num1 * num2;
	printf("%d\n", result);
	return (0);
}

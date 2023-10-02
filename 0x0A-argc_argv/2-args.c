#include <stdio.h>
/**
 * main- the startig point
 * @argc:the counter
 * @argv:the pointer
 * Return:0 success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

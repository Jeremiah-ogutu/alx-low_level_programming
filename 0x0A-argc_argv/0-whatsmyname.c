#include <stdio.h>
/**
 * main - prints program name
 * @argc:the counter
 * @argv:pointer
 *
 * Return:0 success
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	else
	{
		printf("program name note availabe.\n");
	}
	return (0);
}

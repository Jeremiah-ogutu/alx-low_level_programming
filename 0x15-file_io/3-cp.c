#include "main.h"

/**
 * close_fd - a program that copies the content of a file to another file
 * @fd:the content intr
 * Return: 1 els -1
 */
void close_fd(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

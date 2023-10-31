#include "main.h"

/**
 * create_file -= fuction that create a file with a specified permisions
 * @filename:the name assigned
 * @text_content:te provided text content
 *
 * Return: -1 success
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_written;

	fd = open(filename, O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (filename == NULL)
		return (-1);

	if (fd == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		bytes_written = write(fd, text_content, strlen(text_content));

		if (bytes_written == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}

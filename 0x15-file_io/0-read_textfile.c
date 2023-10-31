#include "main.h"

/**
 * read_textfile - fuction that read and prints file to the posix stdio
 *
 * @filename:the file name
 *
 * @letters: number of leters to be printed
 *
 * Return:number of lettet printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t bytesRead;
	ssize_t bytesWritten;
	FILE *file;

	if (filename == NULL)
	{
		return (0);
	}

	buffer = (char *)malloc(letters);
	if (buffer == NULL)
	{
		return (0);
	}
	file = fopen(filename, "r");

	if (file == NULL)
	{
		free(buffer);
		return (0);
	}

	bytesRead = fread(buffer, 1, letters, file);

	if (bytesRead == -1)
	{
		free(buffer);
		fclose(file);
		return (0);
	}

	bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);

	free(buffer);
	fclose(file);

	if (bytesWritten != bytesRead)
		return (0);
	return (bytesWritten);
}

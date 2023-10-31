#include "main.h"

/**
 * append_text_to_file - function that append a text end of line
 *
 * @filename:pointer to the file name
 * @text_content:pointer to the text 
 *
 * Return: 1 success else -1 
 */

int append_text_to_file(const char *filename, char *text_content)
{
	 int fd = open(filename, O_WRONLY | O_APPEND);
	 ssize_t bytes_written;

	 if (filename == NULL)
	 {
		 return (-1);
	 }

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

	 return(1);
}


#include "main.h"

/**
 * create_file - creates an empty file
 * @filename: the file being analyzed
 * @text_content: the contents of the file
 * Return: 1 on success or -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd = open(filename, O_WRONLY | O_TRUNC | O_CREAT, 0600);
	ssize_t wr = write(fd, text_content, strlen(text_content));


	if (filename == NULL)
		return (-1);

	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		if (wr == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}

		



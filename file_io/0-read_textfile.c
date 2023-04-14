#include "main.h"

/**
 *read_textfile - reads the ammount of bytes that are in a file
 *@filename: the name of the file being analyzed
 *@letters: the ammount of letters in the file
 *Return: the bytes read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = open(filename, O_RDONLY);
	char *buffer = malloc(letters * sizeof(char));
	ssize_t bytesRead = read(fd, buffer, letters);
	ssize_t bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);

	if (filename == NULL)
	{
		return (0);
	}

	if (fd == -1)
	{
		return (0);
	}

	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}


	if (bytesRead == -1)
	{
		close(fd);
		free(buffer);
		return (0);
	}

	if (bytesWritten == -1 || bytesWritten != bytesRead)
	{
		close(fd);
		free(buffer);
		return (0);
	}

	close(fd);
	free(buffer);
	return (bytesWritten);
}

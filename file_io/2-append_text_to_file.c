#include "main.h"

/**
 *append_text_to_file - appends text at the end of a file
 *@filename: file being analyzed
 *@text_content: text to be appended at the end
 *Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd = open(filename, O_WRONLY | O_APPEND);
	ssize_t idx = 0;

	if (filename == NULL)
		return (-1);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		while (text_content[idx])
			idx++;
		if (write(fd, text_content, idx) != idx)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}

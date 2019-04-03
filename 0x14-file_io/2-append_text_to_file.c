#include "holberton.h"

/**
 * append_text_to_file - creates a file and fills it with text
 * @filename: name of the file to append
 * @text_content: null terminating string to add at the end of the file.
 * Return: 1 if file exists, -1 if the file doesn't.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wr, re = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);

	if (text_content)
	{
		while (text_content)
			re++;
		if (re > 0)
			wr = write(fd, text_content, re);
		if (wr != re)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);

	return (1);
}

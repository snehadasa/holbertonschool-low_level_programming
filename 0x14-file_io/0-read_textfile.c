#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it to the standard output
 * @filename: name of the file to be read
 * @letters: number of letters to read and print
 * Return: the number of letters printed, or 0 if it failed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int re, wr;
	char *buf = malloc(sizeof(char) * letters);

	if (!buf)
		return (0);

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);

	re = read(fd, buf, letters);
	buf[re] = '\0';

	close(fd);

	wr = write(STDOUT_FILENO, buf, re);
	if (wr < 0)
		return (0);

	free(buf);
	return (wr);
}

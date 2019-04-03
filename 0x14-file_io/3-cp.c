#include "holberton.h"
#include <stdio.h>

/**
 * close_files - closes fr and fw
 * @fr: read file
 * @fw: write file
 * Return: 1 if success
 */
int close_files(int fr, int fw)
{
	int close_fw, close_fr;

	close_fw = close(fw);
	close_fr = close(fr);
	if (close_fr < 0 || close_fw < 0)
	{
		if (close_fr < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fr);
		if (close_fw < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fw);
		return (0);
	}
	return (1);
}

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments passed to the program
 * @argv: array of arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int fr, fw, bytes_read = 0, bytes_written = 0;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fr = open(argv[1], O_RDONLY);
	if (fr < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fw = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fw < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(fr);
		exit(99);
	}
	while ((bytes_read = read(fr, buff, 1024)) > 0)
	{
		bytes_written = write(fw, buff, bytes_read);
		if (bytes_read != bytes_written)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(fr);
			exit(99);
		}
	}
	if (bytes_read < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (!close_files(fr, fw))
		exit(100);
	return (0);
}

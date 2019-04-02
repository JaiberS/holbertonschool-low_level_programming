#include "holberton.h"

/**
 * read_textfile -  reads a text file and prints it to the POSIX standard out
 * @filename: name of the file
 * @letters: number of letters to be printed
 *
 * Return: actual number of letters it could read and print
 */


ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t cprinted;
	char *buf;


	if (filename == NULL)
		return (0);
/* read */
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);


	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	cprinted = read(fd, buf, letters);
	if (cprinted == -1)
		return (0);

	close(fd);

	cprinted = write(STDOUT_FILENO, buf, cprinted);
	if (cprinted == -1)
		return (0);

	return (cprinted);
}

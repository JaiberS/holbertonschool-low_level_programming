#include "holberton.h"

/**
 * main - copies one file to another
 * @argc: number of inputs
 * @argv: inputs in string
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int fdf, fdt;
	ssize_t confr = 1024, confw;
	char buf[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"),
			exit(97);
	fdf = open(argv[1], O_RDONLY);
	if (fdf == -1)
		dprintf(STDERR_FILENO,
			"Error: Can't read from file %s\n", argv[1]), exit(98);
	fdt = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fdt == -1)
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", argv[2]),	exit(99);
	while (confr != '\0')
	{	confr = read(fdf, buf, 1024);
		if (confr == -1)
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]),
				exit(98);
		confw = write(fdt, buf, confr);
		if (confw == -1 || confw != confr)
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]),
				exit(99);
	}
	confr = close(fdt);
	confw = close(fdf);
	if (confr == -1 || confw == -1)
	{
		if (confr == -1)
			dprintf(STDERR_FILENO,
				"Error: Can't close fd %i\n", fdt);
		if (confw == -1)
			dprintf(STDERR_FILENO,
				"Error: Can't close fd %i\n", fdf);
		exit(100);
	}
	return (0);
}

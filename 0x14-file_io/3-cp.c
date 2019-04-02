#include "holberton.h"



int main (int argc, char *argv[])
{
	int fd;
	ssize_t conf;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

/* read */

        fd = open(argv[1], O_RDONLY);

        if (fd == -1)
        {
                dprintf(2, "Error: Can't read from file %s\n", argv[0]);
                exit(98);
        }
        conf = read(fd, buf, 1024);
	if (conf == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[0]);
		exit(98);
	}
        close(fd);

/* write */

	fd = open(argv[2],O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (fd == -1)
	{
		dprintf(2, "Error: Can't write to file %s\n", argv[0]);
		exit(99);
	}

	conf = write(fd, buf, conf);
	if (conf == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	conf = close(fd);
	if (conf == -1)
	{
		dprintf(2, "Error: Can't close fd %i\n", fd);
		exit(100);
	}
	return (0);
}

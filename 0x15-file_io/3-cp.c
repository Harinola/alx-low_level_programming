#include "main.h"
/**
 * copy_from_to - writes from onr file to another.
 * @file_from: file to read from.
 * @file_to: file to write to.
 *
 * Return: 1(Success), -1(Failure).
 */
void copy_from_to(const char *file_from, const char *file_to)
{
	int fd_r, fd_w;
	int r, c_r, c_w;
	char *buf[BUFSIZ];

	fd_r = open(file_from, O_RDONLY);
	if (fd_r < 0)
	{
		dprintf(2, "Error: can't read from file %s\n", file_from);
		exit(98);
	}

	fd_w = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((r = read(fd_r, buf, BUFSIZ)) > 0)
	{
		if (fd_w < 0 || write(fd_w, buf, r) != r)
		{
		dprintf(2, "Error: Can't write to %s\n", file_to);
		close(fd_r);
		exit(99);
		}
	}
	if (r < 0)
	{
		dprintf(2, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	c_r = close(fd_r);
	c_w = close(fd_w);

	if (c_r < 0)
	{
		dprintf(2, "Error: Can't close fd %i\n", c_r);
		exit(100);
	}
	if (c_w < 0)
	{
		dprintf(2, "Error: Can't close fd %i\n", c_w);
		exit(100);
	}
}
/**
 * main - Utilizes the copy_to_from function to copy from one file to another.
 * @ac: argument count.
 * @av: argument vector.
 *
 * Return: Always 0(Success).
 */
int main(int ac, char *av[])
{
	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	copy_from_to(av[1], av[2]);

	return (0);
}

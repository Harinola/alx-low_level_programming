#include "main.h"
/**
 * create_file - Creates a file.
 * @filename: Name of the file to create.
 * @text_content: NULL terminated string to write to the file.
 *
 * Return: 1(Success), -1 (Failure).
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int len = 0, i, w;

	if (!filename)
		return (-1);

	fd = creat(filename, S_IRUSR | S_IWUSR);
	if (fd < 0)
		return (-1);

	if (!text_content)
	{
		return (1);
	}

	for (i = 0; text_content[i]; i++)
	{
		len++;
	}

	w = write(fd, text_content, len);
	if (w < 0)
		return (-1);

	close(fd);

	return (1);
}

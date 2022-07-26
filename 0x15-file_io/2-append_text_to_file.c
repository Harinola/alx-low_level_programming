#include "main.h"
/**
 * append_text_to_file - Append text at the end of a file.
 * @filename: Name of the file.
 * @text_content: NULL terminated string to add at the end of the file.
 *
 * Return: 1(Success), -1(Failure).
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int len = 0;
	int i, w;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);

	if (!text_content)
		return (1);

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

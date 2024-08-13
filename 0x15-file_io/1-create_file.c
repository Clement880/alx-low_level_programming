#include "main.h"
#include <string.h>
#include <unistd.h>

/**
 * create_file - Creates file
 * @filename: pointer to the name of the file to be created
 * @text_content: pointer to a string to be written to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t t;
	ssize_t lng;

	if (filename == NULL)
		return (-1);

	lng =(text_content == NULL) ? 0 : strlen(text_content);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	t = write(fd, text_content, lng);

	if (t == -1)
	{
		close(fd);
		return (-1);
	}

	if (close(fd) == -1)
		return (-1);

	return (1);
}

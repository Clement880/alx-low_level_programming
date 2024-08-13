#include "main.h"
/**
 * create_file - Creates file
 * @filename: pointer to the name of the file to be created
 * @text_content: pointer to a string to be written to the file
 * Return: - if the function fails else -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd, t, lng = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lng = 0; text_content[lng];)
			lng++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	t = write(fd, text_content, lng);

	if (fd == -1 || t == -1)
		return (-1);

	close(fd);

	return (-1);
}

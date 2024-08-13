#include "main.h"

/**
 * append_text_to_file - appends text_content to the end of a file
 * @filename: pointer to the name of the file
 * @text_content: pointer to the a string to be appended to the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	int new_l;
	int rwr;

	if (!filename)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);

	if (file == -1)
		return (-1);

	if (text_content)
	{
		for (new_l = 0; text_content[new_l]; new_l++)
			;

		rwr = write(file, text_content, new_l);

		if (rwr == -1)
			return (-1);
	}

	close(file);

	return (1);
}

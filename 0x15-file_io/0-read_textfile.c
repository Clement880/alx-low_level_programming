#include "main.h"
/**
 * read_textfile - Reads text files and to STDOUT
 * @filename: text file to read
 * @letters: number of letters to read
 * Return: t- actual number of bytes read and printed
 * 0 on failure or filename is NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t fd;
	ssize_t t;
	ssize_t v;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	v = read(fd, buff, letters);
	t = write(STDOUT_FILENO, buff, v);

	free(buff);
	close(fd);
	return (t);
}

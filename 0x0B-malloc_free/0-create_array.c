#include "main.h"
#include <stdlib.h>

/**
 * create_array - function creates an array of chars
 * @size: size of array
 * @c: char that fills up the array
 *
 * Return: size
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
		return (NULL);

	s = malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}

	return (s);
}

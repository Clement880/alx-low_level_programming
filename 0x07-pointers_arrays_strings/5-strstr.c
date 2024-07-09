#include "main.h"
/**
 * _strstr - locates the string.
 * @haystack: is the sctring we search for.
 * @needle: is the substring to be found.
 * Return: the substring if located - a pointer to the beginnig of the string.
 * if the substring is not located - NULL.
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		i = 0;

		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);

				i++;
			} while (haystack[i] == needle[i]);
		}

		haystack++;
	}

	return ('\0');
}

 #include "main.h"

/**
 * _strpbrk - searches the string for set of bytes.
 * @s: the string neede to search
 * @accept: the set of to be searched for.
 *
 * Return: bytes in s if one matches bytes in accep or null
 */
char *_strpbrk(char *s, char *accept)
{
	char *ptr_s = s;
	char *ptr_accept;

	while (*ptr_s != '\0')
	{
		ptr_accept = accept;
		while (*ptr_accept != '\0')
		{
			if (*ptr_s == *ptr_accept)
				return (ptr_s);
			ptr_accept++;
		}
		ptr_s++;
	}

	return ('\0');
}

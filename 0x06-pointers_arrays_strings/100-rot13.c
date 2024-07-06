#include "main.h"

/**
 * rot13 - encoder rot13
 *
 * @str: pointer to string params
 *
 * Return:( *str)
 */
char *rot13(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		if ((*ptr >= 'a' && *ptr <= 'm') || (*ptr >= 'A' && *ptr <= 'M'))
		{
			*ptr += 13;
		}
	else if ((*ptr >= 'n' && *ptr <= 'z') || (*ptr >= 'N' && *ptr <= 'Z'))
	{
		*ptr -= 13;
	}
		ptr++;
	}
	return (str);
}


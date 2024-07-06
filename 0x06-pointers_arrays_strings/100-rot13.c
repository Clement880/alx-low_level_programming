#include "main.h"

/**
 * rot13 - encoder rot13
 *
 * @str: pointer to string params
 * main: calls rot13(text) to encode text using rot13
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

int main(void)
{
	char text[] = "Hello, World! This is a test.";

	rintf("Original: %s\n", text);
	rot13(text);
	printf("Encoded:  %s\n", text);

	return (0);
}

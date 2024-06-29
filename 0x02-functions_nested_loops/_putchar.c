#include <unistd.h>

/**
 * _putchar - writes the character c to stout
 * @c: The character to print
 * Return: (1) On success
 * On error, -1 will return, and errno is set appropriately.
 */
int _putchar(char c)

{
	
	return (write(1, &c, 1));

}

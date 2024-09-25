#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "main.h"
/**
 * _memcpy  - copies memory area
 * @dest: place where memory is stored
 * @src: where memory is copied
 * @n: the number of bytes
 *
 * Return: copied momory, n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	 return memcpy(dest, src, n);
}

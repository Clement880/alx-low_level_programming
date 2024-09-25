#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "main.h"
/**
 * _strncpy - function copies a string
 * @dest: parameter one
 * @src: parameter two
 * @n: parameter three
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	 return strncpy(dest, src, n);
}

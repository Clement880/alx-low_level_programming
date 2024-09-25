#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _memset - fills up a specific block of memory with a specific value
 * @s: is starting address of memory to be filled
 * @b: is the desired value
 * @n: the number of bytes to be changed
 *
 * Return: change array with the new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
    return memset(s, b, n);
}


#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "main.h"
/**
 * _strpbrk - main entry point
 * @s: input value
 * @accept: input value
 * Return: everytime (0) on success
 *
 */
char *_strpbrk(char *s, char *accept)
{
	return strpbrk(s, accept);
}

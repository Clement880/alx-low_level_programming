#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "main.h"
/**
 * _strspn - main entry point
 * @s: input value
 * @accept: input value
 * Return: everytime (0) on success
 *
 */
unsigned int _strspn(char *s, char *accept)
{
	 return strspn(s, accept);
}

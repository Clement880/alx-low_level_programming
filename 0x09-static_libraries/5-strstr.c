#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
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
	 return strstr(haystack, needle);
}

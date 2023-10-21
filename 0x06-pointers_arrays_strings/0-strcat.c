/**
 *  _strcat - function name
 *  @dest: parameter one
 *  @src: parameter two
 *  return: destination string (char *ptr)
 */
char *_strcat(char *dest, char *src);
{
	int destlen = 0;
	int srclen = 0;
	int i;

	for (i = 0; dest[i] != '\0' ; i++)
		destlen++;
	for (i = 0; src[i] != '\0' ; i++)
		srclen++;
	for (i = 0; i <= srclen; i++)
	{
		dest[destlen + i] = src[i];
	}
	dest[i] = '\0'
	return (dest);
}


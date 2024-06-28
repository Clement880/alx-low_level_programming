#include <stdio.h>
/**
 * main - script prints the lowercase alphabet in reverse
 *
 * Return: everytime(0) on success
 *
 */
int main(void)
{
	char i = 'z';

	while (i >= 'a')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}

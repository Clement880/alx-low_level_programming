#include <stdio.h>
/**
 * main - Entry start point
 * Return: Everytime (0) on success
 */
int main(void)
{
	char lowerbet = 'a';
	char alphabet = 'A';

	while (lowerbet <= 'z')
	{
		putchar(lowerbet);
		lowerbet++;
	}
	while (alphabet < 'Z')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n')
	return (0);
}	

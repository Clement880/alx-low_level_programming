#include <stdio.h>
/**
 * main - prints the first 52 filbonacci numbers
 * Return: nothing!
 */
int main(void)
{
	int t = 0;
	long v = 1, l = 2;

	while (t < 50)
	{
	if (t == 0)
	printf("%ld", v);
	else if (t == 1)
	printf(", %ld", l);
	else
	{
	l += v;
	v = l - v;
	printf(", %ld", l);
	}
	++t;
	}
	printf("\n");
	return (0);
}

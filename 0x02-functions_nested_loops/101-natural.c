#include <stdio.h>
/**
 * main - entry point
 * Return: everytime (success)
 *
 */
{
	int t, v = 0;

	while (t < 1024)
	{
	if ((i % 3 == 0) || (t % 5 == 0))
	{
	v += t;
	}
	t++;
	}
	printf("%d\n",v);

	return (0);
}

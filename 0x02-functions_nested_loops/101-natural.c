#include <stdio.h>
/**
 * main - prints the sum of multiplesof 3 or 5 uptil 1024
 * Return: everytime (success)
 *
 */
int main(void)
{
	int t, v = 0;

	while (t < 1024)
	{
	if ((t % 3 == 0) || (t % 5 == 0))
	{
	v += t;
	}
	t++;
	}
	printf("%d\n",v);

	return (0);
}

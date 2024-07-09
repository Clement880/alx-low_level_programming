#include <stdio.h>
/**
 * main - prints the sum of even fibonacci numbers
 * less than 4000000
 * Return: nothing!
 */
int main(void)
{
	int t = 0;
	long f = 1, v = 2, sum = v;

	while (v + f < 4000000)
	{
	v += f;
	if (v % 2 == 0)
	sum += v;
	f = v - f;
	++t;
	}
	printf("%ld\n", sum);
	return (0);
}

#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Start entry point
 *
 * Return: Everytime (0) on success
 *
*/
int main(void)
{
	int n;

	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;
	if (m > 5)
		printf("Last digit of %n is %n and is greater than 5\n", n, m);
	if (m == 0)
		printf("Last digit of %n is %n and is 0\n", n, m);
	if (m < 6 && m != 0)
		printf("Last digit of %n is %n and is less than 6 is not 0\n", n, m);
	return (0);
}

#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints natural numbers from 98
 * @n: number to start printing from
 * Return: (0) everytme
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
	for (; n <= 98; n++)
	{
	if (n == 98)
	{
	printf("%d", n);
	printf("\n");
	}
	else
	{
	printf("%d, ",  n);
	}
	}
	}
	else
	{
	for (; n >= 98; n--)
	{
	if (n == 98)
	{
	printf("%d", n);
	printf("\n");
	break;
	}
	else
	{
	printf("%d, ", n);
	}
	}
	}
}

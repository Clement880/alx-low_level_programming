#include <stdio.h>
#include <unistd.h>
/**
 * main - print without using the functions listed in the NAME section
 *
 * Return: always (1)
 *
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}

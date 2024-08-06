#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints alll elements of a listint_t 
 *
 * @h: the head linker of node
 *
 * Return: number of node
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);
	for (count = 0; h != NULL; count++)
	{
		printf("%d\n",h->n);
		h = h->next;
	}
	return (count);
}

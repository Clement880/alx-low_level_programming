#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints int data in a singly linked list
 *
 * @h: head pointer to the list
 *
 * Return: the number of node in list
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);
	for (count = 0; h != NULL; count++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}

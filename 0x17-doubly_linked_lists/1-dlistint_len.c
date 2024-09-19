#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint - Prints all the elements of a dlistint_t list.
 * @h: Pointer to the head of the doubly linked list.
 *
 * Return: The number of nodes in the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h && h->prev)
		h = h->prev;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}

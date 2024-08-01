#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/*
 * list_len - Returns the number of elements for linked list
 * @h: list name
 *
 * Return: nodes
 */
size_t list_len(const list_t *h)
{
	int cout = 0;

	while (h)
	{
		cout++;
		h = h->next;
	}
	return (cout);
}

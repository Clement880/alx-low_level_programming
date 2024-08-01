#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - prints all elements of a list_t list
 *
 * @h: the list_t name
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int cout = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
		printf("[%d] %s\n", h->len, h->str);
		}
		cout++;
		h = h->next;
	}
	return (cout);
}

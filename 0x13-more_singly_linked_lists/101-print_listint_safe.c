#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _r - reallocates memory for an array pointer
 * to the linked list nodes
 * @list: the old list to append
 * @size: size of new list (always one more than th previous list)
 * @new: new node to list
 *
 * Return: pointer
 */
const listint_t **_r(const listint_t **list, size_t size, const listint_t *new)
{
	const listint_t **n_list;
	size_t t;

	n_list = malloc(size * sizeof(listint_t *));
	if (n_list == NULL)
	{
		free(list);
		exit(98);
	}
	for (t = 0; t < size - 1; t++)
		n_list[t] = list[t];
	n_list[t] = new;
	free(list);
	return (n_list);
}

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to the start of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t t, nmb = 0;
	const listint_t **list = NULL;

	while (head != NULL)
	{
		for (t = 0; t < nmb; t++)
		{
			if (head == list[t])
			{
				printf("->[%p] %d\n", (void *)head, head->n);
				free(list);
				return(nmb);
			}
		}
		nmb++;
		list = _r(list, nmb, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(list);
	return (nmb);
}

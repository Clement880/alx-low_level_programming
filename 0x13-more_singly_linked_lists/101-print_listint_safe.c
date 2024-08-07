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
	const listint_t **new_list;
	size_t i;

	new_list = malloc(size * sizeof(listint_t *));
	if (new_list == NULL)
	{
		free(list);
		exit(98);
	}
	for (i = 0; i < size - 1; i++)
		new_list[i] = list[i];
	new_list[i] = new;
	free(list);
	return (new_list);
}

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to the start of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i, node_count = 0;
	const listint_t **list = NULL;

	while (head != NULL)
	{
		for (i = 0; i < node_count; i++)
		{
			if (head == list[i])
			{
				printf("->[%p] %d\n", (void *)head, head->n);
				free(list);
				return(node_count);
			}
		}
		node_count++;
		list = _r(list, node_count, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(list);
	return (node_count);
}

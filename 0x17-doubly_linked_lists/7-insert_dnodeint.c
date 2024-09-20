#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h: Double pointer to the head of the list
 * @idx: Index at which to insert the new node
 * @n: The integer data for the new node
 *
 * Return: Address of the new node, or NULL if it failed or index is invalid
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current = *h;
	unsigned int i;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *h;
	if (*h)
		(*h)->prev = new_node;
	*h = new_node;
	return (new_node);
	}

	for (i = 0; current && i < idx; i++)
	{
		current = current->next;
	}

	if (i !=idx)
	{
	free(new_node);
	return (NULL);
	}
	current = *h;
	for (i = 0; current && i < idx - 1; i++)
	{
	current = current->next;
	}

	new_node->next = current->next;
	new_node->prev = current;

	if (current->next)
		current->next->prev = new_node;

	return (new_node);
}

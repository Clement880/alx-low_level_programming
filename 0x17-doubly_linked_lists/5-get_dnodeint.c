#include <stdlib.h>
#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node
 * of a dlistint_t linked list
 * @head: Pointer to the head of the list
 * @index: The index of the node
 *
 * Return: The address of the node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int c_index = 0;
	dlistint_t *c_node = head;

	while (c_node)
	{
		if (c_index == index)
		{
			return (c_node);
		}
		c_node = c_node->next;
		c_index++;
	}

	return (NULL);
}

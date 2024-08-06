#include "lists.h"
/**
 * get_nodeint_at_index - retrieves node at an index
 * @head: pointer to the head of the list
 * @index: desired position to retrieve
 * Return: pointerto the retrieved node
 *
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int t;

	for (t = 0; t < index; t++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}

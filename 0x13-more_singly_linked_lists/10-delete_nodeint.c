#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - deletes a node of a list at a
 * particular index
 * @head: pointer to the head of the list
 * @index: index of the node to be freed
 * Return: (1) on success and an (-1) if not
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int t;
	listint_t *temp;
	listint_t *nde;

	temp = *head;
	if (head == NULL || *head == NULL)
		return (-1);
	for (t = 0; t < index - 1 && temp != NULL && index != 0; t++)
		temp = temp->next;
	if (index == 0)
	{
		nde = temp->next;
		free(temp);
		*head = nde;
	}
	else
	{
		if (temp->next == NULL)
			nde = temp->next;
		else
			nde = temp->next->next;
		free(temp->next);
		temp->next = nde;
	}
	return (1);
}

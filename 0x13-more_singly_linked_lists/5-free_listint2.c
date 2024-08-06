#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - frees list of node, and sets the
 * head to NULL
 * @head: points to the first element of the list
 * Return: (void)
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL || *head == NULL)
		return;
	while ((*head)->next != NULL)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	free(*head);
	*head = NULL;
}

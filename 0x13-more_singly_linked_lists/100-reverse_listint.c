#include "lists.h"
#include <stdlib.h>
/**
 * reverse_listint - reverses a singly linked list
 * @head: pointer to the head of the list
 * Return: pointer to the first element of
 * the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp;
	listint_t *n_tmp;

	if (head == NULL || *head == NULL)
		return (NULL);
	temp = *head;
	*head =temp->next;
	temp->next = NULL;

	while (*head != NULL)
	{
		n_tmp = (*head)->next;
		(*head)->next = temp;
		temp = *head;
		if (n_tmp == NULL)
			return (*head);
		*head = n_tmp;
	}
	if (*head == NULL)
	{
		*head = temp;
		return (*head);
	}
	return (NULL);
}

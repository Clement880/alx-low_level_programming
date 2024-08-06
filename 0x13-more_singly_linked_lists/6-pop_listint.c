#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - deletes first node of a list and
 * returns data
 *
 * @head: pointer to the list
 * Return: integer
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *tmp;

	if (head == NULL || *head == NULL)
		return (0);
	tmp = *head;
	n = tmp->n;
	*head = (*head)->next;
	free(tmp);
	return (n);
}

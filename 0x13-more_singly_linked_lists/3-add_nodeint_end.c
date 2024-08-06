#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - adds a node to the lists end point
 *
 * @head: pointer points the head of the list
 * @n:to be added to the new list
 * Return: element address
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *t;
	listint_t *tmp;

	(void)tmp;

	t = malloc(sizeof(listint_t));
	if (t == NULL)
		return (NULL);

	t->n = n;
	t->next = NULL;
	tmp = *head;
		if (*head == NULL)
		{
			*head = t;
		}
		else
		{
			while (tmp->next != NULL)
			{
				tmp = tmp->next;
			}
			tmp->next = t;
		}
		return (*head);
}

#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at end of
 * a dlistint_t list
 * @head: head of the list
 * @n: value of an element
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *h;
	dlistint_t *new_l;

	new_l = malloc(sizeof(dlistint_t));
	if (new_l == NULL)
		return (NULL);

	new_l->n = n;
	new_l->next = NULL;

	h = *head;

	if (h != NULL)
	{
		while (h->next != NULL)
			h = h->next;
		h->next = new_l;
	}
	else
	{
		*head = new_l;
	}

	new_l->prev = h;

	return (new_l);
}

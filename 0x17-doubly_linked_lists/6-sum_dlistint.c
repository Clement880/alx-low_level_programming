#include <stdlib.h>
#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data (n) in a dlistint_t list
 * @head: Pointer to the head of the list
 *
 * Return: The sum of all data in the list, or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *c = head;

	while (c)
	{
		sum += c->n;
		c = c->next;
	}

	return (sum);
}

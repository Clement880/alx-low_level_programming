#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - adds a node to the start of a list
 *
 * @head: pointer to the head pointer
 * which points to the first node
 *
 * @n: new int. to be created
 * Retur: (0)
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *n_node;

	if (head == NULL)
		return (NULL);

	n_node = malloc(sizeof(listint_t));
	if (n_node == NULL)
		return (NULL);
	n_node->n = n;
	n_node->next = *head;
	*head = n_node;

	return (n_node);
}

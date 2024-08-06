#include "lists.h"
#include <stdlib.h>
/**
 * create_new_node - creates new node
 * @n: node data
 * Return: pointer towards node
 */
listint_t *create_new_node(int n)
{
	listint_t *new_n;

	new_n = malloc(sizeof(listint_t));
	if (new_n == NULL)
		return (NULL);
	new_n->n = n;
	new_n->next = NULL;

	return (new_n);
}

/**
 * insert_nodeint_at_index - inserts node at an index in a list
 * @head: pointerto the head element of the list
 * @idx: index to the position of the new node to be inserted
 * @n: the data of the newly created node
 * Return: the address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int t;
	listint_t *temp;
	listint_t *temp_old;
	listint_t *new_n;

	temp = *head;
	if (head == NULL)
		return (NULL);
	new_n = create_new_node(n);
	if (new_n == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = new_n;
		return (new_n);
	}
	if (idx == 0)
		*head = new_n;
	for (t = 0; t < idx - 1 && temp != NULL && idx != 0; t++)
		temp = temp->next;
	if (temp == NULL)
		return (NULL);
	if (idx == 0)
		new_n->next = temp;
	else
	{
		temp_old = temp->next;
		temp->next = new_n;
		new_n->next = temp_old;
	}
	return (new_n);
}

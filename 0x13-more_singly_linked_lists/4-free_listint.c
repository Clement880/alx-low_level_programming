#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - function frees up a linked list
 * @head: pointer for the first node of the list
 * Return: (NULL)
 *
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while ((tmp = head) != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}

#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list
 * @head: head of a linked list
 *
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *c_node;

	while ((c_node = head) != NULL)
	{
		head = head->next;
		free(c_node->str);
		free(c_node);
	}
}

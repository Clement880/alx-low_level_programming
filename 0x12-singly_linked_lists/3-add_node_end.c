#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * _strlen - finds length of string
 * @str: string to find the length of
 *
 * Reutrn: length of string
 */
unsigned int _strlen(char *str)
{
	unsigned int i;

	for (i = 0; str[i]; i++)
		;
	return (i);
}

/**
 * add_node_end - adds new node at the end
 * of list_t list
 * @str: string to be stored in list
 * @head: head of linked list
 *
 * Return: address of head
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n_node, *c_node;
	
	if (str == NULL)
		return (NULL);
	n_node = malloc(sizeof(list_t));
	if (n_node == NULL)
		return (NULL);
	n_node->str = strdup(str);
	if (n_node->str == NULL)
	{
		free(n_node);
		return (NULL);
	}
	n_node->len = _strlen(n_node->str);
	n_node->next = NULL;
	if (*head == NULL)
	{
		*head = n_node;
		return (n_node);
	}
	c_node = *head;
	while (c_node->next)
		c_node = c_node->next;
	c_node->next = n_node;
	return (n_node);
}

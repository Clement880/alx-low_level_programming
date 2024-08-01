#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - adds node at the beginning of a list
 * @str: the string to add to node
 *
 * @head: original linked list
 * Return: address of new list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *tmp;
	int l = 0;

	tmp = malloc(sizeof(list_t));
	if (tmp == NULL)
		return (NULL);

	while (str[l])
		l++;

	tmp->len = l;
	tmp->str = strdup(str);
	tmp->next =  *head;
	*head = tmp;
	return (tmp);
}

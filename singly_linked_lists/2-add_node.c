#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * add1-node - adding node
 * @head: adress of list
 * @str: new node
 * Return: head
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(str);

	new->next = *head;

	*head = new;

	return (*head);


}

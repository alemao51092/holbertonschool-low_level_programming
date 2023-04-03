#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_node_end - main function
 * @str: string
 * @head: pointer to a pointer to head
 * Return: smth
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nuevo = malloc(sizeof(list_t));
	list_t *last = *head;

	if (nuevo == NULL)
		return (NULL);

	nuevo->str = strdup(str);
	nuevo->len = strlen(str);

	if (*head == NULL)
	{
		*head = nuevo;
		return (*head);
	}

	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = nuevo;
	return (last->next);
}

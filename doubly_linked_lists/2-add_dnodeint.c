#include "lists.h"
#include <stdio.h>
/**
 * *add_dnodeint - main function
 * Description: add new node
 * @head: pointer to a pointer
 * @n: dato of node
 * Return: pointer
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;

	new->next = *head;

	*head = new;

	return (*head);

}

#include <stdio.h>
#include "lists.h"
/**
 * add_dnodeint_end - main function
 * Description: add a node in the end
 * @head: pointer to a pointer
 * @n: data
 * Return: pointer to the last node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *nuevo = malloc(sizeof(dlistint_t));
	dlistint_t *last = *head;

	if (nuevo == NULL)
		return (NULL);

	nuevo->n = n;
	nuevo->next = NULL;

	if (*head == NULL)
	{
		nuevo->prev = NULL;
		*head = nuevo;
		return (*head);
	}
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = nuevo;
	nuevo->prev = last;
	return (last->next);


}

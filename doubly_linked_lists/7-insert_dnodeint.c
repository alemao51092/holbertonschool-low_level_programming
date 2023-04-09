#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a node
 * @h: Placeholder
 * @idx: index
 * @n: int n
 *
 * Return: The address of the node inserted
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *nuevo = NULL;
	dlistint_t *temp = *h;
	dlistint_t *temp2 = NULL;

	if (h == NULL)
		return (NULL);
	nuevo = malloc(sizeof(dlistint_t));
	if (nuevo == NULL)
		return (NULL);
	nuevo->n = n;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}

	while (idx != 1)
	{
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
		idx--;
	}
	temp2 = temp->next;

	if (temp2 == NULL)
	{
		return (add_dnodeint_end(h, n));
	}
	temp->next = nuevo;
	nuevo->prev = temp;
	nuevo->next = temp2;
	if (temp2 != NULL)
	{
		temp2->prev = nuevo;
	}
	return (nuevo);
}

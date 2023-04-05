#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * get_dnodeint_at_index - main function
 * Description: print nth node
 * @head: ch
 * @index: ch1
 * Return: head
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (!head)
		return (NULL);

	while (i != index)
	{
		if (head->next)
			head = head->next;
		else
			return (NULL);
		i++;
	}
	return (head);
}

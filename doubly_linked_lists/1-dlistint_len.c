#include "lists.h"
#include <stdio.h>
/**
 * distint_len - main function
 * Description: return number of elements
 * @h: pointer tu a point
 * Return: count
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}

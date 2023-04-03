#include <stdio.h>
#include "lists.h"
/**
 * list_len - main function
 * Description: numbers of elements
 * @h: ch
 * Return: numbers of elements
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}

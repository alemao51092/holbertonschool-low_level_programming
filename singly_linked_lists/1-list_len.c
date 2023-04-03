#include <stdio.h>
#include "lists.h"
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

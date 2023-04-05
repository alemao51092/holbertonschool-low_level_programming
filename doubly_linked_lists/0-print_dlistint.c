#include "lists.h"
#include <stdio.h>
/**
 * print_dlistint - print all elements
 * Description: print all elelments
 * @h: pointer tu node
 * Return: count
 *
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}

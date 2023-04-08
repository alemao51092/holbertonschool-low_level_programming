#include "lists.h"
#include <stdio.h>
/**
 * sum_dlistint - main function
 * Description: sum all data(n)of a linked list
 * @head: pointer to head of a linked list
 * Return: sum all datan.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);

}

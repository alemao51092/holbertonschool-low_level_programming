#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
* free_list - main function
* @head: a pointer
* Description: free list
*/
void free_dlistint(dlistint_t *head)
{
	while (head != NULL)
	{
		free(head);
		head = head->next;
	}
}

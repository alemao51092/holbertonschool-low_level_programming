#include <stdlib.h>
#include "main.h"
/**
 * *create_array - main function
 * @size: char
 * @c: char1
 * Return: p
 * Decription: create array
 *
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	p = malloc(sizeof(char) * size);

	if (p == NULL)
		return (0);


	for (i = 0; i < size; i++)
		p[i] = c;
	if (size == 0)
	return (NULL);
	return (p);
}

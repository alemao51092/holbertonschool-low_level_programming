#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - main function
 * @b: ch1
 * Description: checked
 * Return: p
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);
	return (p);
}

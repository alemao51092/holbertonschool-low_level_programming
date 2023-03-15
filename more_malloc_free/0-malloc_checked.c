#include "main.h"
/**
 * malloc_checked - main function
 * @b: ch1
 * Description: checked
 * Return: p
 */
void *malloc_checked(unsigned int b)
{
	int *p;

	p = mallo(sizeof(int) * b);

	if (p == NULL)
		exit(98);
	return (p);
}

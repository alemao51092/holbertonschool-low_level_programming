#include "main.h"

/**
 * clear_bit - sets the value of a bit to 1
 * @n: Placeholder
 * @index: Index
 * Return: '1' if it worked, '1' otherwise.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int ref;

	if (n == NULL)
		return (-1);

	if (index > 63)
		return (-1);

	ref = 1 << index;

	ref = ~ref;

	*n = *n & ref;

	return (1);
}

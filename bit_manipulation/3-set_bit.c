#include "main.h"
int
clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int ref;

	if (n == NULL)
		return (-1);

	if (index > 63)
		return (-1);

	ref = 1 << index;

	*n = *n | ref;

	return (1);
}

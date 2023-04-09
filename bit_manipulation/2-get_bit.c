#include <stdio.h>
#include "main.h"
int
 get_bit(unsigned long int n, unsigned long int index)
{
	unsigned int value;

	if (index > 63)
		return (-1);

	value = (n >> index) & 1;

	return (value);
}

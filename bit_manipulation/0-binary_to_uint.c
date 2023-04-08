#include <stdio.h>
#include "main.h"
/**
 * binary_to_uint - main function
 * Description: convert a binary to a unsig
 * @b: str of 0 o 1
 * Return: 0 or valor
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int valor = 0;
	int i;

	if (b == NULL)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] != 48 && b[i] != 49)
			return (0);
		valor = 2 * valor + (b[i] - '0');
	}
	return (valor);

}

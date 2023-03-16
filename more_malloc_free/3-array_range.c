#include "main.h"
#include <stdlib.h>
/**
 * array_range - main function
 * Description: array of int
 * @min: ch1
 * @min: ch2
 * Return: p
 */
int *array_range(int min, int max)
{
	unsigned int ini;
	int *p;
	unsigned int size = (max - min) + 1;

	p = malloc(sizeof(int) * size);

	if (p == NULL)
		return (NULL);

	for (ini = 0; ini < size; ini++)
	{
		p[ini] = min;
		min++;
	}
	return (p);
}

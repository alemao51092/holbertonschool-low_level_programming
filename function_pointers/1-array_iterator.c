#include <stdio.h>
#include "function_pointers.h"
/**
 * array iterator - main function
 * @array: ch
 * @size: tam
 * @action: ch1
 * Description array iterator
 * Return: nth
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action != NULL && array != NULL)
		for (i = 0; i < size; i++)
			(*action)(array[i]);
}

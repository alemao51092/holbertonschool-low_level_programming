#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - main function
 * @array: ch
 * @size: tamaño
 * @cmp: function
 * Description: search a integer
 * Return: nth
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (cmp == NULL || array == NULL || size <= 0)
		return (-1);
	for (index = 0; index < size; index++)
	{
		if ((*cmp)(array[index]) != 0)
			return (index);
	}
	return (-1);
}

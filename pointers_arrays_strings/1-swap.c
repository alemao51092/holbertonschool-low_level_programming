#include "main.h"
/**
 * swap_int - main function
 * Description: swap
 * @a: char
 * @b: ch
 * Return: empty
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

#include "main.h"
/**
 * reverse_array - main function
 * @a: char
 * @n: char1
 * Description: reverse array
 * Return: empty
 */
void reverse_array(int *a, int n)
{
	int ini;
	int temp;
	int high;

	for (ini = 0, high = (n - 1); high > ini; high--, ini++)
	{
		temp = a[ini];
		a[ini] = a[high];
		a[high] = temp;
	}
}

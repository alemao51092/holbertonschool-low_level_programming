#include "main.h"
/**
 * print_array - main function
 * @a: char
 * @n: chrr
 * Description: print array
 * Return: empty
 */
void print_array(int *a, int n)
{
	int cont = 0;

	while (cont < n)
	{
		printf("%d", a[cont]);
		if (cont != n - 1)
			printf(", ");
		cont++;
	}
	printf("\n");
}

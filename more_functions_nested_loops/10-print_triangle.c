#include "main.h"
/**
 * print_triangle - main function
 * Description: triangle
 * @size: variable
 * Return: empty
 */
void print_triangle(int size)
{
	int i, x, y, n = size;

	if (size > 0)
	{
		for (x = 0; x < size; x++)
		{
			n--;
			for (i = n; i > 0; i--)
				_putchar(32);
			for (y = 0; y <= x; y++)
				_putchar(35);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}

}

#include "main.h"
/**
 * print_square - main function
 * @size: character
 * Description: make a square
 * Return: empty
 */
void print_square(int size)
{
	int i;
	int x;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (x = 0; x < size; x++)
				_putchar(35);
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
